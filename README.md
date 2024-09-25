# COVID-19 Detection and Prevention (C++ Console Application)

![Project Banner](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/banner.png)

## Project Overview
The **COVID-19 Detection and Prevention** project is a C++ console application aimed at providing accurate guidance and information to the public during the COVID-19 epidemic. With so much misinformation circulating, this tool helps users easily access reliable data about COVID-19 and assess their own risk based on symptoms they report.

Through a chatbot, users can describe their symptoms, and the program categorizes their risk level based on predefined weights. The system provides instructions based on the risk category, offering advice on how to stay safe, prevent infection, and contact emergency services if necessary.

Repository Link: [COVID-19 Detection and Prevention](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention)

### Screenshot of the Application
![App Screenshot](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/initial-view.png)
![App Screenshot](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/about.png)
![App Screenshot](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/symptoms.png)
![App Screenshot](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/prevent.png)
![App Screenshot](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/self-checker.png)

## Features
- **COVID-19 Information**: Includes general information about the virus, how it spreads, and the SARS-CoV-2 virus responsible for the outbreak.
- **Symptom-Based Detection**: A chatbot allows users to input symptoms, which are weighted and used to determine risk level.
- **Risk Categories**:
  - **Green**: Safe, low risk.
  - **Yellow**: Mild symptoms, be cautious.
  - **Orange**: Moderate symptoms, higher risk.
  - **Red**: Severe symptoms, immediate action needed.
- **Prevention Tips**: Instructions on how to stay safe and reduce the risk of spreading or contracting the virus.
- **Emergency Contacts**: Provides contact details for emergency services and COVID-19-related hotlines.

### Chatbot Interaction Example
![Chatbot Example](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/cha-interaction-1.png)

## Objectives
- **Promote Accurate Information**: Provide verified, reliable data about COVID-19 to users.
- **Increase Awareness**: Educate the public about COVID-19 symptoms, prevention, and risk factors.
- **Assist in Symptom Recognition**: Help users assess the likelihood of infection through symptom evaluation.
- **Provide Instructions**: Offer guidance on what to do based on infection risk.
- **Prevention Strategy**: Suggest best practices to minimize infection risk and flatten the curve.

## Advantages
- **User-friendly Interface**: Easily accessible and straightforward to use.
- **Risk Categorization**: Divides users into four distinct risk categories for easy understanding.
- **COVID-19 Detection**: Helps users recognize if they are at risk of infection.
- **Guidance on Next Steps**: After risk assessment, users receive detailed instructions on what to do next.
- **Emergency Support**: Provides contact details for relevant emergency units and hotlines.

### Example of Risk Categorization
![Risk Zones](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/risk-zones.png)

## Future Enhancements
- Add more detailed data regarding the virus and the epidemic.
- Incorporate graphs and charts to visualize data trends.
- Expand information about hospitals, doctors, and local COVID-19 resources.
- Include vaccine updates and distribution details.
- Add visual aids like graphics to improve user understanding.

## Limitations
- Limited number of symptoms covered in the current version.
- No data charts or visual representations of COVID-19 cases.
- Basic emergency information that could be expanded further.

## How It Works
The application uses a **chatbot** to interact with users and assess symptoms. Each symptom is assigned a weight, and based on the cumulative score, the user is placed in one of four risk categories (Green, Yellow, Orange, or Red). Based on this, the application provides customized instructions to guide the user on what to do next.

### Symptom Detection Flow
![Symptom Detection Flow](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/detection-flow-1.png)
![Symptom Detection Flow](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/detection-flow-2.png)
![Symptom Detection Flow](https://github.com/Juwel2121/COVID-19-Detection-and-Prevention/blob/main/Images/detection-flow-3.png)

By following the chatbot's prompts, users can self-assess their symptoms and receive personalized advice on their risk of COVID-19 infection.

## Getting Started

To set up the project locally, follow these steps:

### Prerequisites

Make sure you have the following installed on your system:
- A C++ compiler (e.g., `g++` for Linux/macOS or MinGW for Windows).
- Git for version control (optional but recommended).

### Installation

**Clone the repository**:
   Clone the repository to your local machine using Git:
   ```bash
   git clone https://github.com/Juwel2121/COVID-19-Detection-and-Prevention.git
