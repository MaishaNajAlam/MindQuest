# MindQuest 

## Project Overview
**MindQuest** is a desktop quiz application built with **Qt 6.x** and **C++17**. It allows users to take quizzes across multiple modes and topics, while administrators can manage quiz content. The application uses **file-based persistence**, requiring no database.

> **Note:** This is an academic project created for learning and educational purposes.

## Technologies Used

- **Language:** C++17  
- **GUI Framework:** Qt 6.x  
- **Build System:** qmake (.pro file)  
- **UI Design:** Qt Designer (.ui files)  
- **Data Storage:** Plain text files (topics.txt, questions_*.txt, admin.txt)  
- **Version Control:** Git  

> MindQuest is a standalone desktop quiz application built entirely in C++ using Qt. It does **not** use any web technologies or server-side frameworks.


## Installation

1. Clone the repository:  
   ```bash
   git clone https://github.com/MaishaNajAlam/MindQuest.git

2. Open the project in **Qt Creator** by selecting the `.pro` file.

3. Build the project using **qmake** and the **Build** button.

4. Run the executable from **Qt Creator** or the build folder.
## Usage

### User Role

1. Login or signup.  
2. Select a quiz mode:  
   - **Game Mode:** Ends immediately upon the first wrong answer.  
   - **Test Mode:** Timed assessment; questions need to be answered within time.  
   - **Practice Mode:** No time restrictions or penalties.  
3. Choose a topic and take the quiz.  
4. View scores and leaderboard.  

### Admin Role

1. Login as administrator.  
2. Add, delete, or manage questions and topics.  
3. All changes are saved immediately to the text files.
## Features

- **Multiple quiz modes:**  
  - **Game Mode:** Ends on first wrong answer.  
  - **Test Mode:** Timed assessment.  
  - **Practice Mode:** Unlimited practice without penalties.  

- **Dual user roles:** Users and Admins.  

- **File-based persistence:** All data saved in plain text.  

- **Topic-based question organization.**  

- **Scoring system and leaderboards** for tracking performance.  

- **Polymorphic question types:** Multiple-choice questions (MCQs) and one-word questions.  

- **50:50 lifeline** for MCQs.  

- **Question swapping** during quizzes.  

- **Simple, window-based GUI navigation** for ease of use.  

- **Timed quizzes:** For test mode assessments.  

- **Academic focus:** Safe, educational environment without commercial intentions.
## License

This project is for **academic purposes only** and is not intended for commercial use.  
All source code and materials are shared under the terms of this repository.  


