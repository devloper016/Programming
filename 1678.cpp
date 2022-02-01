class Solution {
public:
     string interpret(string command) {
        string st="";
        for(int i=0;i<command.length();i++)
        {
            char c=command[i];
            if(c=='G')
            {
                st+='G';
                continue;
            }
            if(c=='(')
            {
                if(command[i+1]==')')
                {
                    st+="o";
                    i++;
                    continue;
                }
                else
                {
                    st+="al";
                    i+=3;
                    continue;
                }
            }
        }
        
        return st;
        
    }
};