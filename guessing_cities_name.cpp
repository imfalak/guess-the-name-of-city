#include<iostream>
#include<list>
#include <ctime>
#include<fstream>
#include<algorithm>

using namespace std;


class player{
    public:
    string name,email,time;
    int score;

    void set_name(string a){
        name = a;
    }
    void set_email(string b){
        email = b;
    }
};


int main(){
    list<string> acity({"agartala","ahmedabad","alexandria","abidjan","ankara","accra","amman","adana","adelaide","anshan","amsterdam","ashgabat","Agadir","athens","alAhmadi","abuDhabi","antipolo","atlanta","austin","aurangabad","alleppey","anantapur","aligarh","almora","ara","ambala","amritsar","andhrapradesh","arunachalpradesh","assam","azamgarh","amethi","alibag","adilabad","amravati","aravali","anantpur","aliganj","ajmer","anantnag","alappuzha","ahmadnagar","alwar","abu","amer","addis ababa","aizwal","ajmer","allahabad","ayodhya","agra","algiers","arcot","azamgarh","amroha"});
    list<string> bcity({"bokaro","ballari","bhilai","bettiah","bodhgaya","bangalore","belgavi","badami","bhiwani","bilaspur","bidar","ballia","bareilly","basti","bhilwara","bikaner","bundi","bhubaneshwar","bhagalpur","buxar","bhusawal","balaghat","balakot","bhojpur","bhopal"});
    list<string> ccity({"chandragiri","chittoor","chapra","chandigarh","chamba","chaibasa","chikkamagaluru","chitradurga","chhindwara","chhatarpur","chandrapur","cherrapunji","cuttack","chennai","chengalpattu","coimbatore"});
    list<string> dcity({"dispur","dibrugarh","darbhanga","dehri","danapur","durg","daman","diu","dwarka","dharmshala","deoghar","dhanbad","dumka","davangere","dharwad","daulatabad","dhenkanal","dhaulpur","dungarpur","deoria","dehradun","darjiling","durgapur","diamondharbour"});
    list<string> ecity({"etawah","eluru","erode","ellora","ernakulam","edappal","edarikode"});
    list<string> gcity({"gaya","gangtok","guwahati","guntur","gandhinagar","gurugram","gulburg","giridih","gwalior","gurdaspur","ganganagar"});
    list<string> hcity({"hubballi","haridwar","hajipur","hisar","hansi","hazaribag","hassan","hoshangabad","hosiarpur","hanumangarh","hyderabad","hathras","hardoi","hamirpur","haridwar","hugli"});
    list<string> jcity({"jamalpur","junagarh","jamnagar","jammu","jamshedpur","jharia","jabalpur","jhabua","jaipur","jaisalmer","jhalawar","jodhpur","jalor"});
    list<string> icity({"itanagar","imphal","indore","itarsi","idukki","india","indravati","islampur","itagi"});
    list<string> kcity({"kolkata","kanpur","kannauj","kochi","kharagpur","krishnanagar","kakinada","kurnool","katihar","kandla","karnal","kurukshetra","kullu","kathua","kalaburagi","kollam","kannur","kottayam","kozhikode","khandwa","kolhapur","kalyan","kohima","konark","karaikal"});
    list<string> lcity({"lakhisarai","ladakh","leh",";lakhanpur","ludhiana","lachung","lalitpur","lakhimpur","lucknow","latur","lavasa","lonavala","lalganj"});
    list<string> mcity({"machilipatnam","madhubani","motihari","munger","muzaffarpur","mahesana","Madikeri","mandya","mangaluru","mysuru","Maheshwar","mandla","mandsaur","mhow","morena","murwara","mahabaleshwar","malegaon","matheran","mumbai","meghalaya","manipur","mizoram","madurai","mamallapuram","mahbubnagar","mainpur","mathura","meerut","mirzapur","moradabad","muzaffarnagar","malda","midnapore","murshidabad"});
    list<string> ncity({"newdelhi","nawada","nalanda","nagaon","navsari","nagpur","nashik","nagaland","nagercoil","nizamabad","navadwip","narela","navimumbai"});
    list<string> pcity({"patna","panaji","puri","panipat","purnia","patan","porbandar","punch","portblair","palakkad","panna","pune","patiala","pali","pudukkottai","prayagraj","pilibhit","purulia"});
    list<string> rcity({"raniganj","raipur","rajkot","ratnagiri","rewa","ratlam","raichur","rajauri","rewari","rohtak","rohini","rajgir","raebareli","rameshwaram"});
    list<string> scity({"sricity","srinagar","silchar","sibsagar","saharsa","samastipur","sasaram","sitamarhi","siwan","surat","sonipat","sirsa","shimla","shivamogga","sehore","shivpuri","satna","satara","sangli","solapur","sevagram","sambalpur","sangrur","shahpura","sawaimadhopur","sikkim","saharanpur","shahjahanpur","sitapur","sultapur","siliguri","siuri"});
    list<string> tcity({"tirupati","tezpur","tiruchchrirappalli","tirunelvali","thane","thalassery","thiruvananthapuram","thrissur","tumkuru"});
    list<string> ucity({"udaipur","udupi","uttarakhand","uttarpradesh","udhampur","ujjain","una"});
    list<string> wcity({"warangal","wardha","worli","wazirganj","warisaleganj","wayanad"});


    list<string> buffer({"atlas"});
    
    player p1;
    string e,x;
    char n[15];
    char checklastletter;


    cout<<endl<<"*********Welcome to Game of ATLAS********"<<endl<<endl;
    cout<<"Enter Name: ";
    cin.getline(n,15);
    p1.set_name(n);
    cout<<"Enter Email: ";
    cin>>e;
    p1.set_email(e);
    p1.score = 0;

    cout<<endl<<"                     Welcome "<<p1.name<<" to Game! Let's Play!"<<endl<<endl<<"Please write 'exit' for exiting the game!"<<endl<<endl;

    cout<<"Computer: ";
    cout<<acity.front()<<endl;
    checklastletter =  acity.front().back();
    acity.pop_front();
    list <string> :: iterator pos;

    while(true){    
        cout<<"You: ";
        cin>>x;
        if(x== "exit"){
            break;
        }
        else{
            cout<<endl;
            pos = find(buffer.begin() , buffer.end() , x);

            if(pos != buffer.end() ){
                cout << "                       ..........City already used, try again! "<<endl;
                continue;
            }
            else{
                char check = x.back();
                char check1 = x.front();
                if(checklastletter!=check1){
                    cout<<"                     .........Wrong Input! Try again"<<endl;
                    continue;
                }
                else{
                    p1.score = p1.score + 1;
                    buffer.push_front(x);

                    if(check1=='a'){
                        acity.remove(x);
                    }
                    else if(check1=='b'){
                        bcity.remove(x);
                    }
                    else if(check1=='c'){
                        ccity.remove(x);
                    }
                    else if(check1=='d'){
                        dcity.remove(x);
                    }
                    else if(check1=='e'){
                        ecity.remove(x);
                    }
                    else if(check1=='g'){
                        gcity.remove(x);
                    }
                    else if(check1=='i'){
                        icity.remove(x);
                    }
                    else if(check1=='h'){
                        hcity.remove(x);
                    }
                    else if(check1=='j'){
                        jcity.remove(x);
                    }
                    else if(check1=='k'){
                        kcity.remove(x);
                    }
                    else if(check1=='l'){
                        lcity.remove(x);
                    }
                    else if(check1=='m'){
                        mcity.remove(x);
                    }
                    else if(check1=='n'){
                        ncity.remove(x);
                    }
                    else if(check1=='p'){
                        pcity.remove(x);
                    }
                    else if(check1=='r'){
                        rcity.remove(x);
                    }
                    else if(check1=='s'){
                        scity.remove(x);
                    }
                    else if(check1=='t'){
                        tcity.remove(x);
                    }
                    else if(check1=='u'){
                        ucity.remove(x);
                    }
                    else if(check1=='w'){
                        wcity.remove(x);
                    }

                    if(check=='a'||check=='A'){
                        cout<<"Computer: ";
                        cout<<acity.front();
                        checklastletter =  acity.front().back();
                        buffer.push_front(acity.front());
                        acity.pop_front();
                    }
                    else if(check=='b'){
                        cout<<"Computer: ";
                        cout<<bcity.front();
                        checklastletter =  bcity.front().back();
                        buffer.push_front(bcity.front());
                        bcity.pop_front();
                    }
                    else if(check=='c'){
                        cout<<"Computer: ";
                        cout<<ccity.front();
                        checklastletter =  ccity.front().back();
                        buffer.push_front(ccity.front());
                        ccity.pop_front();
                    }
                    else if(check=='d'){
                        cout<<"Computer: ";
                        cout<<dcity.front();
                        checklastletter =  dcity.front().back();
                        buffer.push_front(dcity.front());
                        dcity.pop_front();
                    }
                    if(check=='e'){
                        cout<<"Computer: ";
                        cout<<ecity.front();
                        checklastletter =  ecity.front().back();
                        buffer.push_front(ecity.front());
                        ecity.pop_front();
                    }
                    else if(check=='g'){
                        cout<<"Computer: ";
                        cout<<gcity.front();
                        checklastletter =  gcity.front().back();
                        buffer.push_front(gcity.front());
                        gcity.pop_front();
                    }
                    else if(check=='h'){
                        cout<<"Computer: ";
                        cout<<hcity.front();
                        checklastletter =  hcity.front().back();
                        buffer.push_front(hcity.front());
                        hcity.pop_front();
                    }
                    else if(check=='i'){
                        cout<<"Computer: ";
                        cout<<icity.front();
                        checklastletter =  icity.front().back();
                        buffer.push_front(icity.front());
                        icity.pop_front();
                    }
                    else if(check=='j'){
                        cout<<"Computer: ";
                        cout<<jcity.front();
                        checklastletter =  jcity.front().back();
                        buffer.push_front(jcity.front());
                        jcity.pop_front();
                    }
                    else if(check=='k'){
                        cout<<"Computer: ";
                        cout<<kcity.front();
                        checklastletter =  kcity.front().back();
                        buffer.push_front(kcity.front());
                        kcity.pop_front();
                    }
                    else if(check=='l'){
                        cout<<"Computer: ";
                        cout<<lcity.front();
                        checklastletter =  lcity.front().back();
                        buffer.push_front(kcity.front());
                        lcity.pop_front();
                    }
                    else if(check=='m'){
                        cout<<"Computer: ";
                        cout<<mcity.front();
                        checklastletter =  mcity.front().back();
                        buffer.push_front(mcity.front());
                        mcity.pop_front();
                    }
                    else if(check=='n'){
                        cout<<"Computer: ";
                        cout<<ncity.front();
                        checklastletter =  ncity.front().back();
                        buffer.push_front(ncity.front());
                        ncity.pop_front();
                    }
                    else if(check=='p'){
                        cout<<"Computer: ";
                        cout<<pcity.front();
                        checklastletter =  pcity.front().back();
                        buffer.push_front(pcity.front());
                        pcity.pop_front();
                    }
                    else if(check=='r'){
                        cout<<"Computer: ";
                        cout<<rcity.front();
                        checklastletter =  rcity.front().back();
                        buffer.push_front(rcity.front());
                        rcity.pop_front();
                    }
                    else if(check=='s'){
                        cout<<"Computer: ";
                        cout<<scity.front();
                        checklastletter =  scity.front().back();
                        buffer.push_front(scity.front());
                        scity.pop_front();
                    }
                    else if(check=='t'){
                        cout<<"Computer: ";
                        cout<<tcity.front();
                        checklastletter =  tcity.front().back();
                        buffer.push_front(tcity.front());
                        tcity.pop_front();
                    }
                     else if(check=='u'){
                        cout<<"Computer: ";
                        cout<<ucity.front();
                        checklastletter =  ucity.front().back();
                        buffer.push_front(ucity.front());
                        ucity.pop_front();
                    }
                    else if(check=='w'){
                        cout<<"Computer: ";
                        cout<<wcity.front();
                        checklastletter =  wcity.front().back();
                        buffer.push_front(wcity.front());
                        wcity.pop_front();
                    }

                
                }

            }

        }
        cout<<"                                     Your Score is: "<<p1.score<<endl;

    }
    cout<<endl<<"Thank You for Playing this Game "<<p1.name <<", Your Final Score is: "<<p1.score<<endl;
    ofstream scorefile;
    scorefile.open("score.csv", ios::out | ios::app);
    time_t now = time(0);
    tm *ltm = localtime(&now);
    scorefile << ltm->tm_mday<<"-"<<1 + ltm->tm_mon<<"-"<<1900 + ltm->tm_year << "," << p1.name <<","<<p1.email<<","<<p1.score<<endl;
    return 0;
}
