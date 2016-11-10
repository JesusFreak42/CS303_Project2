//these are just some experimental functions.  More ideas than anything.  Likely incomplete and probably need tweeking





Book vector get_Recommended()
{
Books vector uncommon; 
Customer array[3] best_Customers=find_Highest_Weight( current_customer, vector customers //all the other customers);
uncommon=check_three_customers(current_customer,best_Customers[0],best_Customers[1],best_Customers[2]);

Display_Recommended(uncommon,highest_rated);

}


Customer array[3] find_Highest_Weight(Customer current_customer, vector customers //all the other customers)
{
  Customer array[3] Weight_List;
  
  Weight_List[0]=customers[0];
  Weight_List[1]=customers[1];
  Weight_List[2]=customers[2];
  int weight_One=weight(current_customer,customers[0]);
  int weight_Two=weight(current_customer,customers[1]);
  int weight_Three=weight(current_customer,customers[2]);
  
  for( int i=0; i<customers.size())
  {
  if (current_customer& == customers[i]&)
  continue;
  
  else
  {
  int compare_Weight=weight(current_customer,customer[i]);
  if (compare_Weight>weight_Three)
  {
    Weight_List[2]=customer[i];
    weight_Three=compare_Weight;
    
    if (compare_Weight>weight_Two)
    {
    weight_Three=weight_Two;
    Weight_List[2]=Weight_List[1];
    weight_Two=compare_Weight;
    Weight_List[1]=customer[i]

      if(compare_Weight>weight_Three)
      {
      weight_Two=weight_One;
      Weight_List[1]=Weight_List[0];
      weight_One=compare_Weight;
      Weight_List[0]=customer[i]
      }
    }
  }
}

int weight(customer cus1, customer cus2)
{
omp_set_num_threads(4);

int weight=0;
#pragma omp parellel for
for (int i=0; i<cus1.getRating().size();i++)
{
for (intj=0;j<cus2.getRatings().size();j++)
{
if (cus1.getbook[i]==cus2.getbook[j])
weight+=compare.(cus1.getbook()[i].getrating(),cus2[j].getbook()[j].getrating());
}
}
return weight;
}

int compare (num1,num2)
{
int temp=0;
temp=num1-num2
if (temp>0)
temp=5-temp;
else
temp=5+temp;
return temp;
}

void find_uncommon(customer cus1, customer cus2, vector& uncommon)
{
bool common=false;

#pragma omp parallel for
for (int i=0; i<cus1.size();i++)
{
for (int j=0; j<cus2.size();j++)
{
  if (cus2.book[j].title()==cus1.book[i].title())
  {
    if (cus2.book[j].rating()>3)
    {
      common=true;
    }
  }
}
if (common==false)
uncommon.pushback(cus2.book[i]);
}


Book vector check_three_customers(original,cus1,cus2,cus3)
{
vector uncommon;
find_uncommon(original,cus1,uncommon)
if (uncommon.size()>=3)
{
return uncommon;
}
find_uncommon(original,cus2,uncommon)
if (uncommon.size()>=3)
{
return uncommon;
}
find_uncommon(original,cus3,uncommon)
return uncommon;
}




