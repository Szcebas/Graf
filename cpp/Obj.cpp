#include "../include/Obj.h"

void Obj::load(string fname)
{
    this->name="";
    this->vertices={};
    this->faces={};
    
    string line;

    ifstream OBJfile(fname);

    while (getline(OBJfile, line))
    {
        vector<string> elems = this->split(line, " ");
        if (!elems.empty())
        {
            if (elems[0] == "v")
            {
                float x = stof(elems[1]);
                float y = stof(elems[2]);
                float z = stof(elems[3]);
                vertex v(x, y, z);
                this->vertice                                                                                  s.push_back(v);
            }
            if(elems[0]=="f"){
                vector<int> ind ={};
                for(int i=0;i<elems.size();i++){
                    int v=stoi(this->split(elems[i],"/")[0])-1;
                    ind.push_back(v);
                }
                Face f(ind);
                this->faces.push_back(f);
                
            }
        }
    }
}
   