//Every now and then people in the office moves teams or 
//departments. Depending what people are doing with their 
//time they can become more or less boring. Time to assess the current team.

//You will be provided with an object(staff) containing the staff 
//names as keys, and the department they work in as values.

//Each department has a different boredom assessment score, as follows:

//accounts = 1
//finance = 2
//canteen = 10
//regulation = 3
//trading = 6
//change = 6
//IS = 8
//retail = 5
//cleaning = 4
//pissing about = 25

//Depending on the cumulative score of the team, return the //appropriate sentiment:

//<=80: 'kill me now'
//< 100 & > 80: 'i can handle this'
//100 or over: 'party time!!'
//(7kyu) The office II - Boredom Score

function boredom(staff){
    let assessment;
    let assessmentScore = []
      for (const worker in staff){
        
        switch(staff[worker]) {
           case "accounts":
            assessment = 1;
            break;
          case "finance":
            assessment = 2;
            break;
          case "canteen":
            assessment = 10;
            break;
          case "regulation":
            assessment = 3
            break;
          case "trading":
            assessment = 6;
            break;
          case "change":
            assessment = 6
            break;
          case "IS" :
            assessment = 8;
            break;
          case "retail" :
            assessment = 5;
            break;
          case "cleaning" : 
            assessment = 4;
            break;
          case "pissing about":
            assessment = 25;
            break;
          default :
            assessment = 0;
        }
            assessmentScore.push(assessment) 
      }
       
    
   let score = assessmentScore.reduce((accumulator, currentValue) => accumulator + currentValue,0)
      if(score <= 80){
        return "kill me now"
      }else if(score > 80 && score < 100){
        return "i can handle this"
      }else if(score > 100){
        return "party time!!"
      }
  }