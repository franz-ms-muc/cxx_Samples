#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <cxxabi.h>

using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::make_shared;
using std::vector;


#include "Stooge.h"
#include "Larry.h"
#include "Moe.h"
#include "Curly.h"


/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{


	 vector<Stooge*> roles;

     roles.push_back(new Larry);
     roles.push_back(new Moe);
     roles.push_back(new Curly);

     for (int i = 0; i < roles.size(); i++)
       roles[i]->slap_stick();
     for (int i = 0; i < roles.size(); i++)
       delete roles[i];


     cout << "Example finished." << endl;
}

