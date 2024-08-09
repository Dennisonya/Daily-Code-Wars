//You are given a dictionary/hash/object containing some languages and your test results in the given languages. 
//Return the list of languages where your test score is at least 60, 
//in descending order of the scores.

//Note: the scores will always be unique (so no duplicate values)

//(7Kyu) My Language Skills

function myLanguages(results) {
    const array = []
    
    for(const lang in results){
      if(results[lang] >= 60){
        array.push(lang)
      }
    }
    
    array.sort((a,b) => results[b]-results[a])
    
    return array
  }