
# Report

## Introduction

  The Telecom Billing System is a interface where subscriber comes and add , search, delete ,payment in his account 
  the system is build in that why that is more user friendly and good experience.
  
  
## SWOT ANALYSIS

  ### STRENGTH
      - Easy to use interface and the robustness of the system.
      - Reduce the default payment cases.
      - Easy to excess.
      - User Friendly
  ### WEAKENESSES
      - Maintenance cost
      - High Operation cost
      - Require regular updations
  ### OPPORTUNITIES
      - Integrate other services to same platform
      - Automation
  ### THREATS
     - Other Big players in market


## 4W's & 1H

   - WHAT: Telecom Billing system
   - WHEN: TO pay the bills
   - WHERE: In Telecom sector
   - WHY: To improve old system
   - HOW: To provide an interface for payment


## REQURIMENTS
   
   ### High Level Requriment 
   
   | HLR |DESCRIPTION|
   |:----:|:--------------------------------------------------:|
   |1|the System should add new customer data|
   |2|user should search customer data|
   |3|user should delete customer data|
   |4|the system must display customer data|
   |5|the system must display the Menu|
   
   ### Low Level Requriment
   
   | LLR |DESCRIPTION|
   |:----:|:--------------------------------------------------:|
   |1|The system should ask for name|
   |2|The system should ask for Phone number|
   |3|The system should ask Amount |
   |4|The system should give feedback after every operation|

## Architecture

### Behavioural Design
![1](https://user-images.githubusercontent.com/57553580/153542241-4ff59d35-820b-4cf9-83db-92aeba5ebdec.jpg)
![1](https://user-images.githubusercontent.com/57553580/153542246-a061917d-92f7-4dcd-b86b-5cfc667c59fb.jpg)

### Structural Design
![3](https://user-images.githubusercontent.com/57553580/153542307-cce62d15-db4e-4abc-b435-2bb8f93719e0.jpg)
![4](https://user-images.githubusercontent.com/57553580/153542314-8f84c8ca-4eb4-4134-b3f3-545aada2a0d3.jpg)

## Test Plan and Output

### High Level Test Plan

|Test ID |HLR|Description|Inputs|Expexted O/P| Actual O/P|
|:-------:|:--------|:------------------------------------|:---------|:-----------|:-----------|
|TD01|HLR01|Adding subscriber data|Choice|sucess|sucess|
|TD02|HLR02|Deleting subscriber data|Choice|sucess|sucess|
|TD03|HLR03|searching subscriber data|Choice|sucess|sucess|
|TD04|HLR04|Displaying subscriber data|Choice|sucess|sucess|

### Low Level Test Plan

|Test ID |LLR|Description|Inputs|Expexted O/P| Actual O/P|
|:-------:|:--------|:------------------------------------|:---------|:-----------|:-----------|
|TD01|LLR01|Adding subscriber Name|Rahul|Rahul|Rahul|
|TD01|LLR01|Adding subscriber phone number|6264522022 |6264522022|6264522022|
|TD01|LLR01|Adding subscriber Amount|450|450|450|

## REFERENCE

 I have taken reference from the https://github.com/stepin654321/MiniProject_Template.git
 and https://www.kashipara.com/project/c-c-/64/telecom-billing-management-system-in-c-with-source-

