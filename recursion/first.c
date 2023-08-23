vector<vector<int>>H(vector<int>&v,int i)
{  if(i>=v.size())
   return {{}};
   vector<vector<int>> PartialAns=H(v,i+1);
   vector<vector<int>> ans;
   for(vector<int> X:PartialAns)
   {ans.Push_back(X);
      }
   for(vector<int> X:PartialAns)
   {X.push_back(v[i]);
    ans.push_back(X);
      }
    return ans;

   }
   vector<vector<int>>H(vector<int>&v,int i)
   {  if(i>=v.size()
      return {{}};
      vector<vector<int>> PartialAns=H(v,i+1);
      vector<vector<int>> ans;
      for(vector<int> X:PartialAns)
      {  ans.push_back(x);
         }
      for(vector<int> X:PartialAns)
      {  x.push_back(v[i]);
         ans.push_back(x);
         }
         return ans;
         }
        vector<vector<int>>H(vector<int>&v,int i)
        {  if(i>v.size())
           return {{}};
           vector<vector<int>> PartialAns=H(v,i+1);
           vector<vector<int>> ans;
           for(vector<int> X:PartialAns)
           {  ans.push_back(x);
              }
              for(vector<int> X:PartialAns)
              {  X.push_back(v[i]);
                 ans.push-back(x);
                 }
                 return ans;
        }
        vector<vector<int>> H(vector<int>&v,vector<int>&subset,vector<vector<int>>ans,int i)
        {  if(i>=v.size())
            {  ans.push_back(subset);
              }
              subset.push_back(v[i]);
              H(v,subset,ans,i+1)
              subset.pop_back();
              H(v,subset,ans,i+1);
              }
              vector<vector<int>> powerset(vector<int>&v)
              {  vector<vector<int>>ans;
                 vector<int>subset;
                 H(v,subset,ans,0);
                 return ans;
                 }
                 vector<vector<int>> H(vector<int>&v,vector<int>&subset,vector<vector<int>>ans,int i)
                 {  if(i>=v.size())
                     {  ans.push_back(subset);
                       }
                       subset.push_back(v[i]);
                       H(v,subsest,ans.i+1)
                       subset.pop_back();
                       H(v,subset,ans,i+1)
                       }
                       vector<vector<int>> powerset(vector<int>&v)
                       {  vector<vector<int>> ans;
                          vector<int>subset:
                          H(v,subset,ans,0)
                          return ans;
                          }


           } 