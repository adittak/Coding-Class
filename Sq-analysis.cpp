#include <iostream>
#include <vector> 
#include<string>
using namespace std;

int main() {

    vector<string> squirrelLocation = {"UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN","UPPER MANHATTAN",
    "UPPER MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN","CENTRAL MANHATTAN",
    "CENTRAL MANHATTAN","CENTRAL MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN","LOWER MANHATTAN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN","BROOKLYN",
    "BROOKLYN","BROOKLYN"};

    vector<string> squirrelColor = {"gray","gray","GRAY","Gray","Gray","gray","gray","Black",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","gray","Gray","Gray","Gray","gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","cinnamon","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","gray","Gray","Gray","Gray","Gray","Gray",
    "gray","Gray","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Cinnamon","Gray","cinnamon","Gray","Gray","Gray","Gray","gray","Gray","Gray",
    "cinnamon","Gray","cinnamon","Gray","Gray","Cinnamon","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Black","Black","Black","Gray","Gray",
    "Black","Gray","Gray","Gray","Gray","Black","Black","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Black","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","black","Black","Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Black","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","gray","Gray","gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","cinnamon","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","","Gray","cinnamon","Cinnamon",
    "Gray","gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","cinnamon",
    "Gray","Cinnamon","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","Gray","Gray","Gray","cinnamon","Gray","Gray","Gray","Cinnamon",
    "Cinnamon","Cinnamon","Cinnamon","Gray","Gray","Gray","Gray","Gray","Cinnamon","Gray",
    "CINNAMON","Gray","Cinnamon","Cinnamon","Gray","Gray","Gray","Gray","Gray","Gray","Gray",
    "Gray","Gray","Gray","Gray","cinnamon","Gray","Gray","Cinnamon","Cinnamon","Cinnamon","Gray",
    "Gray","Gray","Cinnamon","cinnamon","Gray","Gray","gray"};

    vector<vector<string>> squirrelActivity = {{"Foraging"},{"Foraging"},
    {"Eating", "Digging something"},{"Running"},{"Running", "Eating"},{"Climbing"},
    {"Foraging"},{"Climbing"},{"Foraging"},{"Eating", "Digging"},{"Eating", "Digging"},{"Running"},
    {"Running"},{"Foraging"},{"Foraging"},{"Running"},{"Running"},{"Foraging"},{""},
    {"Foraging", "Nesting/gathering leaves"},{"Chasing"},{"Running"},{"Eating"},{"Climbing"},
    {"Sleeping"},{"Running"},{"Running"},{"Eating"},{"Running"},{"Foraging"},{"Climbing"},
    {"Foraging"},{"Foraging"},{"Foraging"},{"Eating"},{"Sitting"},{"Chasing", "Climbing"},
    {"Chasing", "Climbing", "Eating"},{"Running"},{"Climbing"},{"Running"},{"Running"},{"Running"},
    {"Running", "Chasing", "Climbing"},{""},{"Climbing", "Foraging"},{"Vocalization at us"},
    {"Running", "Foraging"},{"Running"},{"Running", "Eating"},{"Jumped to building"},
    {"Eating", "Foraging"},{"Climbing"},{"Foraging"},{"Eating"},{"Foraging"},{"Climbing", "Eating"},
    {"Chasing", "Climbing"},{"Chasing", "Climbing"},{"Running"},{"Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Running"},{"Foraging"},{"Foraging"},{"Running", "up tree"},
    {"Running", "up tree"},{"Running", "up tree"},{"Chasing"},{"Chasing"},{"Sitting on branch"},
    {"Running", "up tree"},{"Eating"},{"Eating"},{"Eating"},{"Eating"},{"Eating"},{"Eating"},
    {"Eating"},{"Chasing"},{"Chasing"},{"Eating"},{"Running"},{"Running"},{"Running"},{""},
    {"Chasing"},{"Chasing"},{"Sitting at attention"},{"Eating"},{"Eating"},{"Foraging"},
    {"Foraging"},{"Climbing"},{"Climbing"},{"Climbing"},{"Climbing"},{"Climbing"},{"Climbing"},
    {"Climbing"},{"Climbing"},{"Chasing", "Climbing", "Eating"},{"Chasing", "Climbing", "Eating"},
    {"Chasing", "Climbing", "Eating"},{"Chasing", "Climbing", "Eating"},{"Climbing"},
    {"Climbing", "Eating"},{"Climbing", "Eating"},{"Running"},{"Running"},{"Sitting", "shouting"},
    {"Sitting", "shouting"},{"Sitting", "shouting"},{"Sitting", "shouting"},
    {"Defending tree", "shouting"},{"Defending tree", "shouting"},{"Defending tree", "shouting"},
    {"Defending tree", "shouting"},{"Defending tree", "shouting"},{"Defending tree", "shouting"},
    {"Eating"},{"Chasing", "Climbing"},{"Chasing", "Climbing"},{"Climbing"},{"Climbing"},
    {"Cleaning"},{"Climbing"},{"Foraging"},{"Sitting"},{"Foraging"},{"Resting in tree"},
    {"Running"},{"Sitting"},{"Sitting"},{"Foraging"},{"Foraging"},{"Climbing", "Foraging"},
    {"Running", "Climbing", "Foraging"},{"Climbing"},{"Running", "Eating", "Foraging"},
    {"Foraging"},{"Foraging"},{"Digging"},{"Climbing"},{"Climbing", "Eating"},{"Climbing"},
    {"Running", "Digging"},{"Eating", "Foraging"},{"Foraging"},{"Eating", "Foraging"},
    {"Foraging"},{"Eating", "Foraging"},{"Eating", "Foraging"},{"Eating", "Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Climbing"},{"Climbing"},{"Climbing", "Eating"},{"Foraging"},
    {"Chasing"},{"Chasing"},{"Foraging"},{"Climbing"},{"Chasing"},{"Eating"},{"Eating"},
    {"Eating"},{""},{"Eating"},{"Foraging"},{"Grooming"},{"Foraging"},{""},{""},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{""},{""},{""},
    {""},{"Foraging"},{""},{"Nesting"},{"Climbing"},{"Chasing"},{"Eating"},{"Chasing"},{"Chasing"},
    {"Chasing"},{"Chasing"},{"Chasing"},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},{""},
    {""},{""},{""},{""},{""},{""},{""},{""},{""},{"Foraging"},{""},{""},{""},{""},{""},{""},{""},
    {""},{""},{""},{""},{"Climbing"},{"Foraging"},{"Foraging"},{"Foraging"},{"Running"},
    {"Foraging"},{"Foraging"},{"Climbing"},{"Foraging"},{"Chasing"},{"Chasing"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Climbing (down tree)"},{"Climbing (down tree)"},{"Climbing"},
    {"Climbing"},{"Foraging"},{"Foraging"},{"Climbing"},{"Sitting"},{"Sitting (in tree hole)"},
    {"Lounging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},
    {"Running"},{"Foraging"},{"Sitting"},{"Climbing"},{"Foraging"},{"Climbing (down)"},
    {"Climbing (down)"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},{"Foraging"},
    {"Chasing"},{"Chasing"},{"Foraging"},{"Foraging"},{"Climbing"},{"Climbing"},{"Climbing"},
    {"Climbing"},{"Foraging"},{"Foraging"},{"Running", "Eating"},{"Running", "Eating (peanuts)"},
    {"Climbing", "Watching #2"},{"Running", "Chasing", "Eating"},{"Eating", "Foraging"},
    {"Eating", "Foraging"},{"Climbing", "Foraging"},{"Climbing", "Foraging"},{"Climbing"},{"Eating"},
    {"Climbing", "Eating", "Foraging"},{"Eating", "Foraging"},{"Eating"},{"Eating"},{"Foraging"},
    {"Climbing"},{"Climbing", "Foraging"},{"Running", "Chasing"},{"Running", "Chasing"},
    {"Running", "Climbing", "Eating"},{"Eating", "Foraging"},{""},{""},{""},{"Ear scratching"},
    {""},{"Frolicking"},{"Running", "Climbing", "Scratching"},{"Running", "Climbing"},{"Posing"},
    {"Guarding"},{"Running", "Chasing", "Climbing"},{"Running", "Chasing", "Climbing"},
    {"Running", "Chasing", "Climbing"},{"Foraging"},{"Climbing", "Eating", "Foraging"},
    {"Running", "Foraging"},{""},{"Climbing"},{"Running", "Eating (or pretending to eat)"},
    {"Foraging"},{"Climbing"},{"Climbing"},{"Eating", "Burying"},{"Eating", "Burying"},
    {"Eating"},{"Eating"},{"Eating"},{"Climbing", "Foraging"},{"Running"},{"Eating", "Foraging"},
    {"Very carefully watching a cat"},{"Chattering"},{"Eating (nuts)", "Foraging"},{"Running"},
    {"Climbing", "Foraging"},{"Eating", "Foraging"},{"Eating", "Foraging"},{""},
    {"Climbing", "Balancing on fencing"},{""},{""},{""},{"Chillin'", "Rubbing butt on ground"},
    {"Running"},{"Foraging"},{"Foraging"},{"Running"},{"Foraging"},{"Foraging"},
    {"Eating"},{"Sticking out of a tree"},{"Chasing"},{"Chasing"},{"Hangin' with #13 & #14"},
    {""},{"Climbing (tree)"},{""},{"Snacking in a tree"},{""},{"Prancing about"},
    {"Climbing fence"},{""},{"Climbing fence"},{"battery"},{"Climbing", "Foraging", "Self-cleaning"},
    {"Chasing"},{"Climbing"},{"Eating"},{"Eating"},{"Climbing"},{"Climbing (down)"},
    {"Climbing (down)"},{"Climbing (down)"},{"Climbing (down)"},{"Sitting"},{"Running"},
    {"Running"},{"Eating"},{"Eating"},{"Running"},{"Climbing"},{"Running"},{"Climbing"},
    {"Chasing"},{"Running"},{"Eating", "Foraging"},{"Climbing"},{"Running"},{"Eating", "Foraging"},
    {"Climbing"},{"Climbing", "Sitting in short tree"},{"Eating"},{"Foraging", "Jumping"},
    {"Chilling"},{"Hanging"},{"Running", "Climbing"},{"Climbing"},{"Chasing", "Climbing"},
    {"Climbing"},{"Climbing"},{"Eating", "Foraging"},{"Foraging"},{"Running", "Foraging"},
    {"Eating (bread crumbs)", "Foraging"},{"Running"},{"Hanging out"},{"Foraging"},{"Foraging"},
    {"Foraging"},{"Foraging"},{"Sleeping (Dead?)"},{"Sleeping (Dead?)"},{"Eating (tortilla/chip)"},
    {"Running"},{"Eating"},{"Eating"},{"Foraging"},{"Running", "Foraging"},{"Climbing"},
    {"Running", "Chasing", "Climbing"},{"Foraging"}};
    
    int i;
    int j;
    int manhattanSq =0;
    int cinnamonSq =0;
    int graySq =0;
    int grayManhattanSq =0;
    int foragingSq =0;
    vector<string>modifiedColor(squirrelColor.size());
    
   for(i=0; i<squirrelColor.size(); ++i){
         modifiedColor.at(i) = squirrelColor.at(i);
      for(j=0; j<squirrelColor.at(i).size(); ++j){
          modifiedColor.at(i).at(j) = static_cast<char>(tolower(squirrelColor.at(i).at(j)));     
      }        
   }
    
   for(i=0; i<squirrelColor.size(); ++i){
         if(squirrelLocation.at(i).find("MANHATTAN") != string::npos){
         manhattanSq++;
         if(modifiedColor.at(i).find("gray") != string::npos){
            grayManhattanSq++;
         }
      }
      
      // if(modifiedColor.at(i).find("gray") != string::npos){
      if(modifiedColor.at(i) == "gray"){
            graySq++;
      }
      if(modifiedColor.at(i) == "cinnamon"){
            cinnamonSq++;
      }
      
    }
    
   for(i=0; i<squirrelActivity.size(); ++i){
     for(j=0; j<squirrelActivity.at(i).size(); ++j){
        if(squirrelActivity.at(i).at(j).find("Foraging") != string::npos){
         foragingSq++;
        }
     }
   }
 
   cout << "Total number of squirrels observed: " <<  squirrelColor.size() << endl;
   cout << "Manhattan squirrels: " << manhattanSq << endl;
   cout << "Cinnamon squirrels: " << cinnamonSq << endl;
   cout << "Gray squirrels: " << graySq << endl;
   cout << "Gray squirrels in Manhattan: " << grayManhattanSq << endl;
   cout << "Total number of squirrels observed foraging: " << foragingSq << endl;
  
  
   return 0;
}
