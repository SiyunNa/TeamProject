# 매일매일 추억쌓기 : 다이어리 서비스

## 💡소개
매일매일 추억쌓기는 손글씨로 일일히 일기 쓰기를 귀찮아하는 사용자들을 위한 다이어리 서비스입니다.
키보드 타자로 쉽고 빠르게 일기를 작성하고, 아이디어가 부족할땐 랜덤으로 키워드를 제공하고, 그날 함께 했던 인물들에 따라 일기를 모아서 정렬해주는 등 
소중한 추억을 편리하게 기록하고 볼 수 있게 하는 서비스입니다.

![image](https://user-images.githubusercontent.com/102154392/236805013-9de499e8-5beb-4275-adc6-6ddb0e2e17ec.jpg)


## 💻기능 소개
- project 에 포함시킬 기능 설명(향후 변경 가능함)

사용될 구조체 선언 

구조체 이름 : diary
int date //20230507
string names //이 일기에 등장하는 등장인물들
string content // 일기 내용
int password //(필요하다면) 비밀번호
int weathe[4] //날씨 표현(맑음, 바람, 비, 눈)

일기 목록 확인 및 일기 내용 보기:
listDiary(): 지금까지 작성한 일기 목록을 보여줍니다.
viewDiary(): 보고 싶은 일기의 번호를 입력하면 해당 일기의 내용을 보여줍니다.

일기 추가:
addDiary(): 새로운 일기를 작성하고, 날짜와 내용을 저장합니다.

일기 수정:
editDiary(): 수정하고 싶은 일기의 번호를 입력하면 해당 일기의 내용을 수정할 수 있습니다.

일기 삭제:
deleteDiary(): 삭제하고 싶은 일기의 번호를 입력하면 해당 일기를 삭제할 수 있습니다.

일기 저장:
saveDiary(): 작성한 일기들을 파일에 저장합니다.

일기 즐겨찾기:
bookmarkDiary(): 특정 일기를 즐겨찾기 합니다.
listBookmarkDiary(): 즐겨찾기한 일기들을 모아서 볼 수 있습니다.

비밀 일기 추가:
addSecretDiary(): 비밀번호를 설정하고, 비밀 일기를 추가합니다.
비밀 일기 열람, 수정, 삭제 시 비밀번호가 필요합니다.

함께한 사람:
searchName(): 일기 작성 시 함께한 사람들의 이름을 입력하고, 그 사람과 함께한 추억을 모아서 볼 수 있습니다.

키워드 랜덤 선정 기능:
randomTopic(): 랜덤으로 단어를 추출하여 하나를 선택하여 주재를 선정할 수 있는 기능

날씨 선정:
selectWeather(): 일기를 쓸 때 마다 날씨를 구체적으로 적는 것이 기억을 상기시킬 때 큰 도움이 된다.
날씨를 압력받는 기능이다.

## 🔧 개발환경 및 언어
- C Programming Language
- Linux

## 🧑‍🤝‍🧑Team ProjectNA 
- 저희 "프로젝트나"팀은 "나"씨 성을 가진 팀원들이 모여 프로젝트를 진행한다고 하여 이렇게 이름을 짓게 되었습니다. 
- 팀원 소개
🧑‍22200240 나찬미 : 프로젝트 구현 및 리서치
🧑‍22200238 나시윤 : 프로젝트 구현 및 깃허브 관리
