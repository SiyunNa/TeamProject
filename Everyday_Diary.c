
#include "diaryFile.h"

int selectMenu(){
    int menu;
    printf("\n|------------ ���ϸ��� ���̾ ------------|\n");
    printf("| 1. �ϱ� ��? | 2. �ϱ� �߰� | 3. �ϱ� ���? | 4. �ϱ� ���? | 5. ���ã��? ���? | 6. ���ã��? �߰�/���? |\n| 7. �Բ��� �ι� �̸��� �˻� | 8. ������ �˻� | 14. �ϱ� ���� | 0. ���? |\n\n=> ���ϴ� �޴���? ");
    scanf("%d", &menu);
    return menu;
}

void listDiary(Diary *d[], int count){
    printf("\n| NO | BookMark | YYYY-MM-DD | Title         Locked\n");
    printf("=====================================================\n");
    for(int i =0; i <count ; i++){
        if(d[i]->year != -1){
            printf("%2d ", i+1);
            readDiary(*d[i]);
            printf("\n");
        }
    }
   
}

void listBookmark(Diary *d[], int count){
    printf("\n| NO | BookMark | YYYY-MM-DD | Title         Locked\n");
    printf("=====================================================\n");
    
    for(int i =0; i <count ; i++){
        if(d[i]->year == -1) continue;
        if (d[i]->bookMark == 0) continue;
        printf("%2d ", i+1);
        readDiary(*d[i]);
        printf("\n");
        }
}

void setBookmark(Diary *d){
    if (d->bookMark == 1){
        d->bookMark = 0;
    }
    else d->bookMark = 1;
}

int selectNum(Diary *d[], int max){
    listDiary(d,max);
    int no;
    printf("\n���ϴ� �ϱ� ��ȣ��(���? :0)? ");
    scanf("%d", &no);

    return no;
}


int searchName(Diary *d[], char *tname, int count){
    int index = 0;
    for (int i =0; i<count; i++){
        if (d[i]->year == -1) continue;
        if (strstr(d[i]->names,tname) != 0) {
            index++;
            printf("| %d |", index);
            readDiary(*d[i]);
            printf("\n");
        }
    }

    return index;
}

int searchTitle(Diary *d[], char *ttitle, int count){
    int index = 0;
    for (int i =0; i<count; i++){
        if (d[i]->year == -1) continue;
        if (strstr(d[i]->title,ttitle) != 0) {
            index++;
            printf("| %d |", index);
            readDiary(*d[i]);
            printf("\n");
        }
    }

    return index;
}


int main(){
    Diary *d[100];
    int menu, count, index;

    
    index = loadDiary(d);
    count = index;


    while (1){
        printf("\n>>>>>>>index: %d | count: %d<<<<<<<<<<<<\n", index, count);

        menu = selectMenu();
        if (menu == 0) break;
        if (menu == 1){listDiary(d, index);}
        else if (menu == 2){
            d[index] = (Diary *)malloc(sizeof(Diary));
            addDiary(d[index]);
            index++;
            count ++;
        }
        else if (menu == 3){
            int no = selectNum(d,index);
            if (no == 0) printf("��ҵ�!\n");
            else updateDiary(d[no-1]);
        }
        else if (menu == 4){
            int no = selectNum(d,index);
            if (no == 0) printf("��ҵ�?!\n");
            else updateDiary(d[no-1]);
        }
        else if (menu == 5){
            int no = selectNum(d,index);
            if (no == 0) printf("��ҵ�?!\n");
            else {
                int temp;
                printf("������ �����Ͻðڽ��ϱ�? (���� :1) ");
                scanf("%d", &temp);

                if (temp == 1) {
                    if (d[no-1]) {
                        deleteDiary(d[no-1]);
                    }
                    count--;
                }
            }
        }
        else if (menu == 6){
            printf("========���ã��? �� �ϱ� ���?=======");
            listBookmark(d, count);
            int imenu;
            int itemp;
        }
        else if (menu == 7){
            int itemp;
            while(1){
                itemp = selectNum(d,index);
                if (itemp == 0) break;
                else setBookmark(d[itemp-1]);
            }
        }
        else if (menu == 8){
            char temp[20];
            int index;
            printf("�˻� �Ͻ� �̸��� �Է����ּ���. ");
            scanf("%s", temp);
            printf("\n| NO | BookMark | YYYY-MM-DD | Title         Locked\n");
            printf("=====================================================\n");

            index = searchName(d,temp, count);
            if (index == 0) printf("�ش�Ǵ� �ϱⰡ �����ϴ�! \n");

        }
        else if (menu==9){
            char temp[20];
            int index;

            printf("�˻� �Ͻ� ������ �Է����ּ���. ");

            scanf("%s", temp);
            printf("\n| NO | BookMark | YYYY-MM-DD | Title         Locked\n");
            printf("=====================================================\n");
            index = searchTitle(d,temp, count);
            if (index == 0) printf("�ش�Ǵ� �ϱⰡ �����ϴ�! \n");
        }
        else if (menu==14){
            saveDiary(d, count);
        }

    }
        
    return 0;
}