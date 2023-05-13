# Data analysis on data collected during evaluation in schools

This repository contains the analysis of the data collected during the evaluation of a collaborative AR application performed in three schools in 2023. The analysis of the data has been incorporated in a manuscript titled _"A Collaborative AR Application for Education: from Architecture Design to User Evaluation"_

There were three types of data collected in the study:

- [xAPI statements](https://xapi.com/statements-101/) that were automatically collected by the AR application while students were using them. We created a Python [package](https://stocastico.github.io/xapi_analysis/) that simplifies and speeds up the analysis of xAPI statements. This repository makes use of [**ask_ai**](https://github.com/radekosmulski/ask_ai) a small Python library that allows interacting with ChatGPT from a Jupyter environment. Ideally, using the functions from this repository and the help provided by ChatGPT, even non-technical people should be able to analyse the data collected in the form of xAPI statements.

- Questionnaires data: After using the app, the students were asked to fill a 20-question questionnaire. The questionnaire aimed to measure the students' opinions about the app collaborative functionalities, the user interface and the learning experience. The questionnaires also included an optional "**comments**" section, where the students could add their opinion about the app and anything else that was not captured in the questionnaire. These comments are not included in the data analysis.

- Post intervention interviews with the teachers (not hosted in this repository). After the intervention we conducted short interviews with the teachers, with open-ended questions, asking for their opinions about the app, its usefulness as a learning tool, its advantages and weak points.

Additionally, [in this folder](./generate_questions/) there is the small web app that can be used to generate questions for the app (and automatically compute the answer), as well as the JSON files with the questions used during the evaluations.

This [folder](latex_sources) includes the $\LaTeX$ source files of the manuscript submitted for review.

The code for the app (Android, iOS and web version) is available add the following repository (TODO)
