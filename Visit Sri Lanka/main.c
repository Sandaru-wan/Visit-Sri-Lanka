#include <stdio.h>
#include <string.h>

int main() {

    //Main List- Characters

    char fname[20];
    char lname[20];
    char district[100];
    char contacte[50];
    char place[100];
    char hotels[100];


    //Main List- Intigers

    int contactn;
    int memberadult;
    int memberchild;
    int days;


    //Hotel Price List For Adults


    int rathnapriyasafariguestgaloyaadult=7955;
    int terrelresidenciesgaloyaadult=14850;
    int ouenchinnadult=2448;
    int hotelforusaliyagardenadult=8261;
    int salubriousresortadult=9179;
    int hotelwhitehouseadult=18326;
    int crystalresortadult=9667;
    int greenwillaadult=13921;
    int dedunuguestadult=12238;
    int rivieraresortadult=10463;
    int hoteleastlagoonadult=13263;
    int amandabeachresortadult=18557;
    int thekingsburycolomboadult=35571;
    int hiltoncolomboadult=38244;
    int shangrillaadult=55071;
    int bluebeachgalleadult=15603;
    int anticguesthousegallefortadult=17326;
    int redissonbluresortgalleadult=35490;
    int akashbydbladult=11473;
    int vintophotelandhomestayadult=18365;
    int comillabungalowadult=24476;
    int theoasisbeachresortadult=21539;
    int shangrillahambantotaadult=48952;
    int peacockbeachresortandspaadult=30730;
    int foxjaffnaadult=19137;
    int jaffnaheritagehoteladult=28637;
    int northgatejaffnaadult=20232;
    int cituswaskaduwaadult=26844;
    int turyaakalutaraadult=25382;
    int avanikalutararesortadult=25975;
    int cafeavomainnadult=14227;
    int hoteltravellersnestkandyadult=14753;
    int theradhwallawwaadult=27306;
    int heavenhidesnarangalaadult=55071;
    int bogalavillageecoresortadult=14992;
    int thegrandwalawwaadult=21888;
    int reechaorganicresortjaffnaadult=11014;
    int rjmahaalhoteladult=19887;
    int dreamcityhoteladult=9790;
    int mangalalodgeadult=11553;
    int kandyanreachhoteladult=26006;
    int silverhillecovillageadult=10096;
    int hotelagapeadult=13768;
    int ousiswingshoteladult=8634;
    int thepalmyrahadult=76488;
    int thecovanrosigiriyaadult=30592;
    int lakegalaresortadult=16827;
    int amayalakedambullaadult=55877;
    int polhenagrandresortadult=18357;
    int theseascapeadult=26556;
    int lakrajheritageadult=14686;
    int capitalresortinnadult=6731;
    int sayonrivercottageandecogardenadult=8261;
    int kandegedararesortadult=4338;
    int mulativegrandadult=12721;
    int epicresortadult=18221;
    int alairesortadult=23405;
    int queenswoodcottageadult=21020;
    int galwayheighthoteladult=21147;
    int lagrandvillaadult=20332;
    int siyancoholidayresortadult=8322;
    int giritalehoteladult=15475;
    int manguestpolonnaruwaadult=5507;
    int arachiwilgreennatureresortadult=3060;
    int royalgreengardenhoteladult=7266;
    int cloudnineadult=18449;
    int whitehouseholidayadult=4895;
    int terracecinnamonviewadult=11978;
    int summerridgeadult=5115;
    int elegantgreenbeachresortadult=9102;
    int bluesandbeachresortadult=27230;
    int mrdbeachhoteladult=22885;
    int hotelnorthwayadult=6609;
    int birunthavanamadult=3629;
    int hoteloviyaadult=7698;


    //Travel Cost Details


    int sridaladamaligawaprice = 5800;
    int kandynationalmuseumprice = 5900;
    int peradeniyabotanicalgardenprice = 5450;
    int kandylakeprice = 5900;
    int bahirawakandatempleprice = 5800;
    int jubiliambalamaprice = 3000;
    int kurulukelesencturyprice = 3900;
    int dambanaprice = 3975;
    int galgediyanawaterfallprice = 4055;
    int pinnawalaelephantorphanageprice = 4335;
    int greenparkprice = 16200;
    int warmemorialmonumentprice = 16200;
    int oldwatertankprice = 16400;
    int murippukulamprice = 16800;
    int athugalaviharayaprice = 4775;
    int daladamaligawakurunegalakingdomprice = 4800;
    int maraluwawarajamahaviharayaprice = 4895;
    int athkadarajamahaviharayaprice = 4670;
    int wewalawaterfallprice = 4110;
    int mannardutchfortprice = 15450;
    int thalaimannarlighthouseprice = 16950;
    int southbarbeachprice = 15600;
    int kattukkaraikulamprice = 14400;
    int birdwatchingtowerprice = 15200;
    int aluwiharetempleprice = 7050;
    int riverstonprice = 8300;
    int srimuthumariammankovilprice = 7100;
    int babarakiriellaprice = 7750;
    int nalandagedigeprice = 7150;
    int galledutchfortprice = 5900;
    int gallelighthouseprice = 5950;
    int maritimenationalmuseumprice = 5950;
    int srisudharmaramabuddhisttempleprice = 5800;
    int hikkaduwabeachprice = 5000;
    int gampahabotanicalgardenprice = 1500;
    int vaaranarajamahaviharayaprice = 1740;
    int bopagamaellaprice = 2300;
    int horagollanationalparkprice = 1905;
    int asgiriyarajamahaviharayaprice = 2000;
    int hambantotabeachprice = 10350;
    int dryzonebotanicalgardensprice = 9850;
    int hambantotainternationalmlcportviewpointprice = 10100;
    int hambantotalighthouseprice = 10400;
    int hummanayaprice = 9500;
    int nallurkandaswamydevasthanamprice = 19250;
    int nagadeepaprice = 21150;
    int dutchfortjaffnaprice = 19400;
    int pannaibeachprice = 19450;
    int jaffnaarcheologicalmuseumprice = 19350;
    int richmondcastleprice = 2350;
    int kalutarabodhiyaprice = 2190;
    int thudugalaellaprice = 2835;
    int kalutarabeachprice = 2055;
    int starfortprice =8100;
    int coconuttreehillprice =7650;
    int parawiduuwabeachprice =8150;
    int matarabeachprice =8150;
    int tsunamimemorialprice =4795;
    int crowislandbeachparkprice =345;
    int gangaramayatempleprice =110;
    int viharamahadeviparkprice =145;
    int gallfaceprice =145;
    int independantsquareprice =160;
    int batticaloalighthouseprice =15550;
    int mahathmaghandiparkprice =15550;
    int batticaloabeachprice =15450;
    int batticaloamuseumprice =15600;
    int stmaryscathedralbatticaloaprice =15550;
    int muthiyanganaprice =10550;
    int dunhindaprice =10650;
    int ravanawaterfallsprice =9950;
    int badulladutchfortprice =10450;
    int bogodabridgeprice =10700;
    int jayasrimahabodhiprice =9700;
    int isurumuniyaprice =9650;
    int kuttampokunaprice =9900;
    int ranmasuuyanaprice =9650;
    int elephantpondprice =9650;
    int kumananationalparkprice =17700;
    int lahugalamagulmahaviharayaprice =15650;
    int kitulananationalparkprice =15750;
    int deegavapirajamahaviharayaprice =16200;
    int arugambaybeachprice =16450;
    int vavuniyaparkprice = 12350;
    int sridaladaviharayamadukandaprice = 12500;
    int avusathapitiyabridgeprice = 12200;
    int kalvarichurchprice = 12300;
    int alagalladamprice = 12150;
    int fortfrederickprice = 12950;
    int publicbeachtrincomaleeprice = 12900;
    int swamirockdivesiteprice = 12950;
    int greenbaybeachprice = 13050;
    int sribadrakaliammanhindukovilprice = 12900;
    int rikiliellaprice =  3985;
    int thulhiriyalakeprice = 3135;
    int naangallarockhillprice = 3020;
    int asupiniellaprice = 5400;
    int dothaloyawaterfallprice = 5000;
    int newputtalamjettyprice = 6600;
    int mioyaanicutprice = 7100;
    int wilpattunationalparkprice = 8250;
    int puttalamlagoonislandprice = 6900;
    int neelabemmaprice = 6400;
    int galviharayaprice = 10700;
    int vatadageprice = 10700;
    int daladamaluwaprice = 10700;
    int lotuspondprice = 10750;
    int polonnaruwaancientcityprice = 10700;
    int victoriaparkprice = 7600;
    int moonplainsprice = 7650;
    int hortonplainsnationalparkprice = 8700;
    int devonfallsprice = 6350;
    int hakgalabotanicalgardenprice = 7900;
    int mullaitivubeachprice = 16100;
    int mullaitivucampwarmemorialprice = 16050;
    int nayarubeachprice = 16200;
    int muththulyankattukulamprice = 15400;
    int pigeonislandmarinenationalparkprice = 13600;
    int pareiyanellaprice = 12450;
    int dematamalviharayaprice = 12200;
    int maragalmountainviewpointprice = 13250;
    int ancientpondsprice = 13350;
    int mayuragirilensthoopaprice = 12950;


    //Cost List For Food & Beverages



    int colombocost = 28000;
    int gampahacost= 5000;
    int kalutaracost = 6400;
    int kandycost = 25000;
    int matalecost = 15000;
    int nuwaraeliyacost = 30000;
    int gallecost = 17500;
    int mataracost = 21000;
    int hambantotacost = 18300;
    int jaffnacost = 7300;
    int kilinochchicost = 4600;
    int mannarcost = 6800;
    int vavuniyacost = 6500;
    int mullaitivucost = 4500;
    int batticaloacost = 7200;
    int amparacost = 7400;
    int trincomaleecost = 6100;
    int kurunegalacost = 8900;
    int puttalamcost = 7400;
    int anuradhapuracost = 6500;
    int polonnaruwacost = 8700;
    int badullacost = 6600;
    int moneragalacost = 7400;
    int ratnapuracost = 6400;
    int kegallecost = 8900;


    //Other Expenses
    int otherex;


    //Total Budget
    int total;


    //Calculation
    int a;
    int b;
    int x;
    int y;
    int p;
    int o;
    int t;


    //Average Travel Cost For Each Districts

    int amparaavgcost = 15350;
    int anuradhapuraavgcost = 9600;
    int badullaavgcost = 10750;
    int batticaloaavgcost = 15550;
    int colomboavgcost =2000;
    int galleavgcost = 5950;
    int gampahaavgcost =1500;
    int hambantotaavgcost =10300;
    int jaffnaavgcost =19350;
    int kalutaraavgcost =2300;
    int kandyavgcost = 5800;
    int kegalleavgcost =3890;
    int kilinochchiavgcost =16400;
    int kurunegalaavgcost =5000;
    int mennaravgcost =14350;
    int mataleavgcost = 7150;
    int mataraavgcost =8100;
    int monaragalaavgcost =13000;
    int mullaitivuavgcost =16200;
    int nuwaraeliyaavgcost =7650;
    int polonnaruwaavgcost = 10900;
    int puttalamavgcost =6750;
    int ratnapuraavgcost =4255;
    int trincomaleeavgcost =12750;
    int vavuniyaavgcost =12450;


    //Budgets

    int totalbudget;
    int ourbudget;
    int z;
    int k;


    printf("Enter Your First Name: ");
    scanf("%s", &fname);

    printf("Enter Your Last Name: ");
    scanf("%s", &lname);

    printf("Enter Your Contact Number: ");
    scanf("%d", &contactn);

    printf("Enter Your Contact Email: ");
    scanf("%s", &contacte);

    printf("Enter Number of Adult Members (Above 12 years): ");
    scanf("%d", &memberadult);

    printf("Enter Number of Child Members (Under 12 years): ");
    scanf("%d", &memberchild);


    printf("\n--List Of Districts--\n");
    printf(
        "01. Ampara\n"
        "02. Anuradhapura\n"
        "03. Badulla\n"
        "04. Batticaloa\n"
        "05. Colombo\n"
        "06. Galle\n"
        "07. Gampaha\n"
        "08. Hambantota\n"
        "09. Jaffna\n"
        "10. Kalutara\n"
        "11. Kandy\n"
        "12. Kegalle\n"
        "13. Kilinochchi\n"
        "14. Kurunegala\n"
        "15. Mannar\n"
        "16. Matale\n"
        "17. Matara\n"
        "18. Monaragala\n"
        "19. Mullaitivu\n"
        "20. Nuwaraeliya\n"
        "21. Polonnaruwa\n"
        "22. Puttalam\n"
        "23. Ratnapura\n"
        "24. Trincomalee\n"
        "25. Vavuniya\n"
    );


    printf("\nEnter the District Name You Would Like To Visit (NOTE: First Letter Must be a Capital Letter): ");
    scanf("%s", district);


    if (strcmp(district, "Ampara") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Ampara:\n"
            "01. Kumana National Park\n"
            "02. Lahugala Magul Maha Viharaya\n"
            "03. Kithulana National Park\n"
            "04. Deegawapi Raja Maha Viharaya\n"
            "05. Arugambay Beach\n"
        );

        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Kumana_National_Park") == 0) {
        printf(
            "\n About: Kumana National Park in Sri Lanka is renowned for its avifauna, particularly its large flocks of migratory waterfowl and wading birds. The park is 391 kilometres southeast of Colombo on Sri Lanka's southeastern coast. Kumana is contiguous with Yala�National�Park \n"
            "\nColombo to Destination Distance:354km\n"
            "\nAverage Travel Time From Colombo:8h 37min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kumananationalparkprice);
        }
        else if (strcmp(place, "Lahugala_Magul_Maha_Viharaya") == 0) {
                printf(
            "\n About: Magul Maha Viharaya is an ancient Buddhist temple situated in Lahugala, Ampara District of Sri Lanka. The temple lies on the northern edge of the Lahugala National Park, about 22 km off from Siyambalanduwa town and about 11 km off Pottuvil town. Lahugala has been part of the Kingdom of Ruhuna in ancient Sri Lanka.\n"
            "\nColombo to Destination Distance:313km\n"
            "\nAverage Travel Time From Colombo:7h 15min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", lahugalamagulmahaviharayaprice);
        }
        else if (strcmp(place, "Kithulana_National_Park") == 0) {
                printf(
            "\n About: Kithulana National Park is one of the smallest national parks in Sri Lanka. Despite its land area, the park is an important habitat for Sri Lankan elephant and endemic birds of Sri Lanka.\n"
            "\nColombo to Destination Distance:315km\n"
            "\nAverage Travel Time From Colombo:7h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kitulananationalparkprice);
        }
        else if (strcmp(place, "Deegawapi_Raja_Maha_Viharaya") == 0) {
                printf(
            "\n About: Deeghawapi is a Buddhist sacred shrine and an archaeological site in the Ampara District of Sri Lanka, boasting of historical records dating back to the 3rd century BCE. \n"
            "\nColombo to Destination Distance:324km\n"
            "\nAverage Travel Time From Colombo:7h 54min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", deegavapirajamahaviharayaprice);
        }
        else if (strcmp(place, "Arugambay_Beach") == 0) {
                printf(
            "\n About: Arugam Bay , known locally as Arugam Kudah, is situated on the Indian Ocean in the dry zone of Sri Lanka's southeast coast, and a historic settlement of the ancient Batticaloa Territory (Mattakallappu Desam) \n"
            "\nColombo to Destination Distance:329km\n"
            "\nAverage Travel Time From Colombo:7h 38min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", arugambaybeachprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }




        printf("\n--These are the Hotels around the Ampara District & Prices Of them--\n");


        printf("01. Ouench Inn-- LKR. ");
        printf("%d", ouenchinnadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", ouenchinnadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Rathnapriya Safari Guest Galoya-- LKR. ");
        printf("%d", rathnapriyasafariguestgaloyaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", rathnapriyasafariguestgaloyaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Terrel Residencies Galoya-- LKR. ");
        printf("%d", terrelresidenciesgaloyaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", terrelresidenciesgaloyaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Ouench_Inn") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);


            x=memberadult*ouenchinnadult;
            y=(memberchild*ouenchinnadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", amparacost*days);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*amparaavgcost;
            o=memberchild*(amparaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(amparacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Rathnapriya_Safari_Guest_Galoya") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*rathnapriyasafariguestgaloyaadult;
            y=(memberchild*rathnapriyasafariguestgaloyaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", amparacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*amparaavgcost;
            o=memberchild*(amparaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(amparacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Terrel_Residencies_Galoya") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*terrelresidenciesgaloyaadult;
            y=(memberchild*terrelresidenciesgaloyaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", amparacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*amparaavgcost;
            o=memberchild*(amparaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(amparacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }


    else if (strcmp(district, "Anuradhapura") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Anuradhapura:\n"
            "01. Jaya Sri Maha Bodhiya\n"
            "02. Isurumuniya\n"
            "03. Kuttam Pokuna\n"
            "04. Ranmasu Uyana (Royal Park)\n"
            "05. Elephant Pond (Ath Pokuna)\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Jaya_Sri_Maha_Bodhiya") == 0) {
        printf(
            "\n About: Jaya Sri Maha Bodhi is a historical sacred bo tree in the Mahamewuna Garden in historical city of Anuradhapura, Sri Lanka. \n"
            "\nColombo to Destination Distance:194km\n"
            "\nAverage Travel Time From Colombo:4h 23min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", jayasrimahabodhiprice);
        }
        else if (strcmp(place, "Isurumuniya") == 0) {
                printf(
            "\n About: Isurumuniya is a Buddhist temple situated near to the Tissa Wewa in Anuradhapura, Sri Lanka. There are four carvings of special interest in this Vihara. They are the Isurumuniya Lovers, Elephant Pond and The Royal Family.\n"
            "\nColombo to Destination Distance:193km\n"
            "\nAverage Travel Time From Colombo:4h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", isurumuniyaprice);
        }
        else if (strcmp(place, "Kuttam_Pokuna") == 0) {
                printf(
            "\n About: Kuttam Pokuna (twin ponds or pools) are well preserved old bathing tanks or ponds in Sri Lanka. This pair of ponds was built by the Sinhalese in the ancient Anuradhapura Kingdom.\n"
            "\nColombo to Destination Distance:198km\n"
            "\nAverage Travel Time From Colombo:4h 28min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kuttampokunaprice);
        }
        else if (strcmp(place, "Ranmasu_Uyana") == 0) {
                printf(
            "\n About: Ranmasu Uyana is a park in Sri Lanka containing the ancient Magul Uyana (Royal Gardens). It is situated close to Isurumuni Vihara and Tissa Wewa in the ancient sacred city of Anuradhapura, Sri Lanka. \n"
            "\nColombo to Destination Distance:193km\n"
            "\nAverage Travel Time From Colombo:4h 22min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", ranmasuuyanaprice);
        }
        else if (strcmp(place, "Elephant_Pond") == 0) {
                printf(
            "\n About: There is a huge man-made pond near Lankaramaya in Anuradhapura, called �Eth Pokuna� or �Elephant Pond�. \n"
            "\nColombo to Destination Distance:198km\n"
            "\nAverage Travel Time From Colombo:4h 29min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", elephantpondprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Anuradhapura District & Prices Of them--\n");
        printf("01. Hotel For U Saliya Garden-- LKR. ");
        printf("%d", hotelforusaliyagardenadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hotelforusaliyagardenadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Salubrious Resort-- LKR. ");
        printf("%d", salubriousresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", salubriousresortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Hotel White House-- LKR. ");
        printf("%d", hotelwhitehouseadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hotelwhitehouseadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Hotel_For_U_Saliya_Garden") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hotelforusaliyagardenadult;
            y=(memberchild*hotelforusaliyagardenadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", anuradhapuracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*anuradhapuraavgcost;
            o=memberchild*(anuradhapuraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(anuradhapuracost*days)+(otherex);
            printf("%d",k);


            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Salubrious_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*salubriousresortadult;
            y=(memberchild*salubriousresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", anuradhapuracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*anuradhapuraavgcost;
            o=memberchild*(anuradhapuraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(anuradhapuracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hotel_White_House") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hotelwhitehouseadult;
            y=(memberchild*hotelwhitehouseadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", anuradhapuracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*anuradhapuraavgcost;
            o=memberchild*(anuradhapuraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(anuradhapuracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Badulla") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Badulla:\n"
            "01. Muthiyangana\n"
            "02. Dunhida\n"
            "03. Rawana Waterfall\n"
            "04. Badulla Dutch Fort\n"
            "05. Bogoda Bridge\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Muthiyangana") == 0) {
        printf(
            "\n About: Muthiyangana Raja Maha Vihara is an ancient Buddhist temple located in the middle of Badulla town in the Badulla District of Uva Province in Sri Lanka. \n"
            "\nColombo to Destination Distance:211km\n"
            "\nAverage Travel Time From Colombo:5h 38min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", muthiyanganaprice);
        }
        else if (strcmp(place, "Dunhida") == 0) {
                printf(
            "\n About: Dunhinda Falls is a waterfall located about 5 kilometres from Badulla in the lower central hills of Sri Lanka. The waterfall, which is 64 metres high, gets its name from the smoky dew drops spray, which surrounds the area at the foot of the waterfall. The fall is created by the Badulu Oya which flows through Badulla. \n"
            "\nColombo to Destination Distance:213km\n"
            "\nAverage Travel Time From Colombo:5h 42min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", dunhindaprice);
        }
        else if (strcmp(place, "Rawana_Waterfall") == 0) {
                printf(
            "\n About: Rawana Falls is a popular sightseeing attraction in Uva province of Sri Lanka. It currently ranks as one of the widest falls in the country. \n"
            "\nColombo to Destination Distance:199km\n"
            "\nAverage Travel Time From Colombo:5h 23min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", ravanawaterfallsprice);
        }
        else if (strcmp(place, "Badulla_ Dutch_Fort") == 0) {
                printf(
            "\n About: The Dutch Fort in Badulla is a historical fort located in the town of Badulla, Sri Lanka. It was built by the Dutch during their colonial rule in the 17th century. \n"
            "\nColombo to Destination Distance:209km\n"
            "\nAverage Travel Time From Colombo:5h 33min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", badulladutchfortprice);
        }
        else if (strcmp(place, "Bodoga_Bridge") == 0) {
                printf(
            "\n About: The Bogoda Wooden Bridge was built in the 16th century during the Dambadeniya era. This is said to be the oldest surviving wooden bridge in Sri Lanka. The bridge is situated at 7 kilometres west of Badulla. All parts of this bridge were constructed from wood, including the use of wooden nails as fixing material. \n"
            "\nColombo to Destination Distance:214km\n"
            "\nAverage Travel Time From Colombo:5h 53min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", bogodabridgeprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Badulla District & Prices Of them--\n");
        printf("01. Crystal Resort-- LKR. ");
        printf("%d", crystalresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", crystalresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Dedunu Guest-- LKR. ");
        printf("%d", dedunuguestadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", dedunuguestadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Green Villa-- LKR. ");
        printf("%d", greenwillaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", greenwillaadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Crystal_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*crystalresortadult;
            y=(memberchild*crystalresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", badullacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*badullaavgcost;
            o=memberchild*(badullaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(badullacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Dedunu_Guest") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*dedunuguestadult;
            y=(memberchild*dedunuguestadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", badullacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*badullaavgcost;
            o=memberchild*(badullaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(badullacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Green_Villa") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*greenwillaadult;
            y=(memberchild*greenwillaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", badullacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*badullaavgcost;
            o=memberchild*(badullaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(badullacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Batticaloa") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Batticaloa:\n"
            "01. Lighthouse\n"
            "02. Mahathma Ghandhi Park\n"
            "03. Batticaloa Beach\n"
            "04. Batticaloa Museum\n"
            "05. St.Mary's Cathedral\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Lighthouse") == 0) {
        printf(
            "\n About: Batticaloa Lighthouse is a lighthouse in Sri Lanka, situated near the estuary in Palameenmadu. It was built in 1913 and is 28 meters high. \n"
            "\nColombo to Destination Distance:311km\n"
            "\nAverage Travel Time From Colombo:6h 53min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", batticaloalighthouseprice);
        }
        else if (strcmp(place, "Mahathma_Ghandhi_Park") == 0) {
                printf(
            "\n About: Magul Maha Viharaya is an ancient Buddhist temple situated in Lahugala, Ampara District of Sri Lanka. The temple lies on the northern edge of the Lahugala National Park, about 22 km off from Siyambalanduwa town and about 11 km off Pottuvil town. Lahugala has been part of the Kingdom of Ruhuna in ancient Sri Lanka. \n"
            "\nColombo to Destination Distance:311km\n"
            "\nAverage Travel Time From Colombo:6h 53min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", mahathmaghandiparkprice);
        }
        else if (strcmp(place, "Batticaloa_Beach") == 0) {
                printf(
            "\n About: Lahugala Kitulana National Park is one of the smallest national parks in Sri Lanka. Despite its land area, the park is an important habitat for Sri Lankan elephant and endemic birds of Sri Lanka. \n"
            "\nColombo to Destination Distance:309km\n"
            "\nAverage Travel Time From Colombo:6h 51min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", batticaloabeachprice);
        }
        else if (strcmp(place, "Batticaloa_Museum") == 0) {
                printf(
            "\n About: Deeghawapi is a Buddhist sacred shrine and an archaeological site in the Ampara District of Sri Lanka, boasting of historical records dating back to the 3rd century BCE. \n"
            "\nColombo to Destination Distance:312km\n"
            "\nAverage Travel Time From Colombo:6h 55min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", batticaloamuseumprice);
        }
        else if (strcmp(place, "St.Mary's_Cathedral") == 0) {
                printf(
            "\n About: Arugam Bay , known locally as Arugam Kudah, is situated on the Indian Ocean in the dry zone of Sri Lanka's southeast coast, and a historic settlement of the ancient Batticaloa Territory (Mattakallappu Desam) \n"
            "\nColombo to Destination Distance:311km\n"
            "\nAverage Travel Time From Colombo:6h 54min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", stmaryscathedralbatticaloaprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Baticaloa District & Prices Of them--\n");
        printf("01. Riviera Resort-- LKR. ");
        printf("%d", rivieraresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", rivieraresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Hotel East Lagoon-- LKR. ");
        printf("%d", hoteleastlagoonadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hoteleastlagoonadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Amanda Beach Resort-- LKR. ");
        printf("%d", amandabeachresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", amandabeachresortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Riviera_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*rivieraresortadult;
            y=(memberchild*rivieraresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", batticaloacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*batticaloaavgcost;
            o=memberchild*(batticaloaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(batticaloacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hotel_East_Lagoon") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hoteleastlagoonadult;
            y=(memberchild*hoteleastlagoonadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);



            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", batticaloacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*batticaloaavgcost;
            o=memberchild*(batticaloaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(batticaloacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Amanda_Beach_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*amandabeachresortadult;
            y=(memberchild*amandabeachresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", batticaloacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*batticaloaavgcost;
            o=memberchild*(batticaloaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(batticaloacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Colombo") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Colombo:\n"
            "01. Crow Island Beach Park\n"
            "02. Gangaramaya Temple\n"
            "03. Viharamahadevi Park\n"
            "04. Galleface\n"
            "05. Independant Square\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Crow_Island_Beach_Park") == 0) {
        printf(
            "\n About: Crow Island Beach Park is the only coastal wetland in Colombo district, and even though it is a small urban park, people who want to see birds can observe more than 30 bird species and other fauna species, as well as a lot of flora species, in this beautiful park. \n"
            "\nColombo to Destination Distance:6.9km\n"
            "\nAverage Travel Time From Colombo:18min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", crowislandbeachparkprice);
        }
        else if (strcmp(place, "Gangaramaya_Temple") == 0) {
                printf(
            "\n About: Gangaramaya Temple is one of the most important temples in Colombo, Sri Lanka, being a mix of modern architecture and cultural essence. Located on the Beira Lake, it was completed in the late 19th century. \n"
            "\nColombo to Destination Distance:2.2km\n"
            "\nAverage Travel Time From Colombo:6min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", gangaramayatempleprice);
        }
        else if (strcmp(place, "viharamahadevi_Park") == 0) {
                printf(
            "\n About: Viharamahadevi Park is a public park located in Cinnamon Gardens, in Colombo, situated in front of the colonial-era Town Hall in Sri Lanka. It was built by the British colonial administration and is the oldest and largest park of Colombo. \n"
            "\nColombo to Destination Distance:2.9km\n"
            "\nAverage Travel Time From Colombo:7min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", viharamahadeviparkprice);
        }
        else if (strcmp(place, "Galleface") == 0) {
                printf(
            "\n About: Galle Face is a 5 ha (12 acres) ocean-side urban park, which stretches for 500 m (1,600 ft) along the coast, in the heart of Colombo, the financial and business capital of Sri Lanka. \n"
            "\nColombo to Destination Distance:2.9km\n"
            "\nAverage Travel Time From Colombo:7min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", gallfaceprice);
        }
        else if (strcmp(place, "Independant_Square") == 0) {
                printf(
            "\n About: Independence Memorial Hall is a national monument in Sri Lanka built for commemoration of the independence of Sri Lanka from the British rule with the restoration of full governing responsibility to a Ceylonese-elected legislature on 4 February 1948. \n"
            "\nColombo to Destination Distance:3.2km\n"
            "\nAverage Travel Time From Colombo:9min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", independantsquareprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Colombo District & Prices Of them--\n");
        printf("01. The Kingsbury Colombo-- LKR. ");
        printf("%d",thekingsburycolomboadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",thekingsburycolomboadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02.Hilton colombo-- LKR. ");
        printf("%d",hiltoncolomboadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",hiltoncolomboadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Shangrilla-- LKR. ");
        printf("%d",shangrillaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",shangrillaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "The_Kingsbury_Colombo") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*thekingsburycolomboadult;
            y=(memberchild*thekingsburycolomboadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", colombocost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*colomboavgcost;
            o=memberchild*(colomboavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(colombocost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hilton_Colombo") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hiltoncolomboadult;
            y=(memberchild*hiltoncolomboadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", colombocost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*colomboavgcost;
            o=memberchild*(colomboavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(colombocost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(colombocost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");

        }

        else if (strcmp(hotels, "Shangrilla") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*shangrillaadult;
            y=(memberchild*shangrillaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", colombocost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*colomboavgcost;
            o=memberchild*(colomboavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(colombocost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(colombocost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Galle") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Galle:\n"
            "01. Galle Dutch Fort\n"
            "02. Galle Lighthouse\n"
            "03. Maritime National Museum\n"
            "04. Sri Sudharmarama Buddhist Temple\n"
            "05. Hikkaduwa Beach\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Galle_Dutch_Fort") == 0) {
        printf(
            "\n About: Galle Fort, in the Bay of Galle on the southwest coast of Sri Lanka, was built first in 1588 by the Portuguese, then extensively fortified by the Dutch during the 17th century from 1649 onwards. It is a historical, archaeological and architectural heritage monument, which even after more than 432 years maintains a polished appearance, due to extensive reconstruction work done by the Archaeological Department�of�Sri�Lanka. \n"
            "\nColombo to Destination Distance:118km\n"
            "\nAverage Travel Time From Colombo:3h 18min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", galledutchfortprice);
        }
        else if (strcmp(place, "Galle_Lighthouse") == 0) {
                printf(
            "\n About: The Galle Lighthouse (also known as Pointe de Galle Light)[2] is an onshore lighthouse in Galle, Sri Lanka and is operated and maintained by the Sri Lanka Ports Authority.[3] This is Sri Lanka's oldest light�station. \n"
            "\nColombo to Destination Distance:119km\n"
            "\nAverage Travel Time From Colombo:3h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", gallelighthouseprice);
        }
        else if (strcmp(place, "Maritime_National_Museum") == 0) {
                printf(
            "\n About: The National Museum of Galle (Galle National Museum) is one of the national museums of Sri Lanka. It is located in the oldest remaining Dutch building in the Galle fort, Galle, a single storey colonnaded Dutch building built in 1656 as the commissariat store for the Dutch garrison at the fort.[1] It subsequently served as a billiards room for the adjoining New Oriental Hotel (now the Amangalla Hotel). The building was renovated by the Department of National Museums and opened on�31�March�1986 \n"
            "\nColombo to Destination Distance:119km\n"
            "\nAverage Travel Time From Colombo:3h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", maritimenationalmuseumprice);
        }
        else if (strcmp(place, "Sri_Sudharmarama_Buddhist_Temple") == 0) {
                printf(
            "\n About: Sri Sudharmarama Purana Viharaya is a Buddhist temple located in Galle. It is one of the 3071 Buddhist temples in Sri Lanka. Address of Sri Sudharmarama Purana Viharaya is Kalegana Road, Galle, Sri Lanka. Sri Sudharmarama Purana Viharaya can be contacted at 94912245782. Sri Sudharmarama Purana Viharaya has quite many listed places around it and we are covering at least 38 places around it on�Srilanka-Places \n"
            "\nColombo to Destination Distance:116km\n"
            "\nAverage Travel Time From Colombo:3h 9min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", srisudharmaramabuddhisttempleprice);
        }
        else if (strcmp(place, "Hikkaduwa_Beach") == 0) {
                printf(
            "\n About: Hikkaduwa is one of the best surfing spots in Sri Lanka, offering a clear hot water base. The waves vary in size from�4�to�11�feet. \n"
            "\nColombo to Destination Distance:99.9km\n"
            "\nAverage Travel Time From Colombo:2h 46min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hikkaduwabeachprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Galle District & Prices Of them--\n");
        printf("01. Blue Beach Galle-- LKR. ");
        printf("%d",bluebeachgalleadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",bluebeachgalleadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02.Antic Guest House Galle Fort-- LKR. ");
        printf("%d",anticguesthousegallefortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",anticguesthousegallefortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03.Redisson Blu Resort Galle -- LKR. ");
        printf("%d",redissonbluresortgalleadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",redissonbluresortgalleadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Blue_Beach_Galle") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*bluebeachgalleadult;
            y=(memberchild*bluebeachgalleadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", gallecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*galleavgcost;
            o=memberchild*(galleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(gallecost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(gallecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Antic_Guest_House_Galle_Fort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*anticguesthousegallefortadult;
            y=(memberchild*anticguesthousegallefortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", gallecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*galleavgcost;
            o=memberchild*(galleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(gallecost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(gallecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Redisson_Blu_Resort_Galle") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*redissonbluresortgalleadult;
            y=(memberchild*redissonbluresortgalleadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", gallecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*galleavgcost;
            o=memberchild*(galleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(gallecost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(gallecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Gampaha") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Gampaha:\n"
            "01. Waarana Rajamaha Viharaya\n"
            "02. Gampaha Botanical Garden\n"
            "03. Horagolla National Park\n"
            "04. Asgiriya Raja Maha Viharaya\n"
            "05. Bopagama Ella\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Waarana_Rajamaha_Viharaya") == 0) {
        printf(
            "\n About: Warana Raja Maha Vihara is an ancient Buddhist temple situated in Thihariya, Gampaha District, Sri Lanka. The temple is located approximately 5 km away from the Colombo - Kandy highway. Currently this temple has been recognized as an archaeological protected site in Gampaha District by Archaeological�department. \n"
            "\nColombo to Destination Distance:34.8km\n"
            "\nAverage Travel Time From Colombo:1h 5min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", vaaranarajamahaviharayaprice);
        }
        else if (strcmp(place, "Gampaha_Botanical_Garden") == 0) {
                printf(
            "\n About: Henarathgoda Botanic Gardens,Gampaha was established in 1876 for the introduction of rubber to Sri Lanka and possess an array of botanical and horticultural attractions with a rich history. It is situated in Gampaha with a total extent�of�17.4. \n"
            "\nColombo to Destination Distance:29.6km\n"
            "\nAverage Travel Time From Colombo:1h 1min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", gampahabotanicalgardenprice);
        }
        else if (strcmp(place, "Horagolla_National_Park") == 0) {
                printf(
            "\n About: Horagolla National Park is one of the latest national parks in Sri Lanka. It is so called because of an abundance of Dipterocarpus zeylanicus trees. The area was originally declared as a wildlife sanctuary on 5 September 1973 due to its rich�biodiversity. \n"
            "\nColombo to Destination Distance:38.1km\n"
            "\nAverage Travel Time From Colombo:1h 8min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", horagollanationalparkprice);
        }
        else if (strcmp(place, "Asgiriya_Raja_Maha_Viharaya") == 0) {
                printf(
            "\n About: Asgiriya Raja Maha Vihara is an ancient Cave temple situated in Gampaha District, Sri Lanka. The temple is located on top of a hillock on the Gampaha - Minuwangoda road and approximately 2 km away from Gampaha town. The temple has been formally recognised by the Government as an archaeological site�in�Sri�Lanka. \n"
            "\nColombo to Destination Distance:31.9km\n"
            "\nAverage Travel Time From Colombo:1h 2min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", asgiriyarajamahaviharayaprice);
        }
        else if(strcmp(place, "Bopagama_Ella") == 0) {
                printf(
            "\n About: Bopagama Ella is situated in the Kandalanda Estate in the Gampaha district. It is 4 meters high and is also known as �Alagiyawanna Ella Fall�. The meaning of the name of this fall is �beautifully colored� as it gives out multicolored rays of light when the water reflects the greenery around it. \n"
            "\nColombo to Destination Distance:46km\n"
            "\nAverage Travel Time From Colombo:1h 21min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", bopagamaellaprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Gampaha District & Prices Of them--\n");
        printf("01. Akash by DBL-- LKR. ");
        printf("%d",akashbydbladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",akashbydbladult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Vintop Hotel and Homestay-- LKR. ");
        printf("%d", vintophotelandhomestayadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", vintophotelandhomestayadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03.Comilla Bungalow -- LKR. ");
        printf("%d",comillabungalowadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",comillabungalowadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Akash_by_DBL") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*akashbydbladult;
            y=(memberchild*akashbydbladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", gampahacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*gampahaavgcost;
            o=memberchild*(gampahaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(gampahacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(gampahacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Vintop_Hotel_and_Homestay") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*vintophotelandhomestayadult;
            y=(memberchild*vintophotelandhomestayadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", gampahacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*gampahaavgcost;
            o=memberchild*(gampahaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(gampahacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(gampahacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Comilla_Bungalow") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*comillabungalowadult;
            y=(memberchild*comillabungalowadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", gampahacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*gampahaavgcost;
            o=memberchild*(gampahaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(gampahacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(gampahacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Hambantota") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Hambantota:\n"
            "01. Hambantota Beach\n"
            "02. Dry Zone Botanical Garden\n"
            "03. Hambantota International mlc Port View Point\n"
            "04. Hambantota Lighthouse\n"
            "05. Hummanaya\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Hambantota_Beach") == 0) {
        printf(
            "\n About: Hambantota Beach, situated approximately 150 km away from Colombo, tops the list of beaches in the Sri Lanka region. Located in an urban area, it�s just 0.5 km from the center of Hambantota settlement. The beach boasts a spacious coastline with turquoise waters and yellow sand, making it a perfect spot for a relaxing getaway1. If you�re planning a beach adventure, you might also want to explore nearby beaches like Kalametiya Beach, Lankavatara Beach, and Kochchama Beach2. Enjoy the sun, sand, and crystal-clear�waters! \n"
            "\nColombo to Destination Distance:207km\n"
            "\nAverage Travel Time From Colombo:5h 7min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hambantotabeachprice);
        }
        else if (strcmp(place, "Dry_Zone_Botanical_Garden") == 0) {
                printf(
            "\n About: Mirijjawila Botanical Garden is one of the five botanical gardens in Sri Lanka. The other botanical gardens are Peradeniya Botanical Garden, Hakgala Botanical Garden, Henarathgoda Botanical Garden and Seetawaka Botanical�Garden. \n"
            "\nColombo to Destination Distance:197km\n"
            "\nAverage Travel Time From Colombo:4h 54min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", dryzonebotanicalgardensprice);
        }
        else if (strcmp(place, "Hambantota_International_mlc_Port_View_Point") == 0) {
                printf(
            "\n About: The Hambantota International Port is a deep water port in Hambantota, Sri Lanka, notable for its 99-year lease to China Merchant Ports. Opened in 2010, it is Sri Lanka's second largest port, after Colombo. In 2020, the port handled 1.8 million�tonnes�of�cargo. \n"
            "\nColombo to Destination Distance:202km\n"
            "\nAverage Travel Time From Colombo:5h ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hambantotainternationalmlcportviewpointprice);
        }
        else if (strcmp(place, "Hambantota_Lighthouse") == 0) {
                printf(
            "\n About: Hambantota Lighthouse is an onshore lighthouse, located on a rocky promontory in Hambantota,�Sri�Lanka. \n"
            "\nColombo to Destination Distance:208km\n"
            "\nAverage Travel Time From Colombo:5h 10min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hambantotalighthouseprice);
        }
        else if (strcmp(place, "Hummanaya") == 0) {
                printf(
            "\n About: Hummanaya Blowhole is the only known blowhole in Sri Lanka and it is considered to be the second largest blowhole in the world. Hummanaya refers to the noise, hoo, that can be heard a distance away when the blowhole�is�active. \n"
            "\nColombo to Destination Distance:190km\n"
            "\nAverage Travel Time From Colombo:5h 6min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hummanayaprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Hambantota District & Prices Of them--\n");
        printf("01. The Oasis Beach Resort-- LKR. ");
        printf("%d", theoasisbeachresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", theoasisbeachresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Peacock Beach Resort and Spa-- LKR. ");
        printf("%d", peacockbeachresortandspaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", peacockbeachresortandspaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Shangrilla Hambantota-- LKR. ");
        printf("%d",  shangrillahambantotaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", shangrillahambantotaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "The_Oasis_Beach_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*theoasisbeachresortadult;
            y=(memberchild*theoasisbeachresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", hambantotacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*hambantotaavgcost;
            o=memberchild*(hambantotaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(hambantotacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(hambantotacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Peacock_Beach_Resort_and_Spa") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*peacockbeachresortandspaadult;
            y=(memberchild*peacockbeachresortandspaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", hambantotacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*hambantotaavgcost;
            o=memberchild*(hambantotaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(hambantotacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(hambantotacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Shangrilla_Hambantota") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*shangrillahambantotaadult;
            y=(memberchild*shangrillahambantotaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", hambantotacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*hambantotaavgcost;
            o=memberchild*(hambantotaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(hambantotacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(hambantotacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }

    }
    else if (strcmp(district, "Jaffna") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Jaffna:\n"
            "01. Nallur Kandaswamy Dewasthanam\n"
            "02. Nagadeepa\n"
            "03. Jaffna Dutch Fort\n"
            "04. Pannai Beach\n"
            "05. Jaffna Archeological Museum\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Nallur_Visit") == 0) {
        printf(
            "\n About: The Nallur Kandaswamy Kovil is a Hindu temple, located in Nallur, Northern Province, Sri Lanka.[2] The presiding deity is Murugan (Kartikeya) in the form of the divine spear vel in the sanctum, the primary shrine, and in other forms, namely, Shanmugar, Muthukumaraswami, Valli Kanthar with consorts Valli and Deivayanai, and Dandayuddhapani, sans consorts in secondary shrines in�the�temple. \n"
            "\nColombo to Destination Distance:385km\n"
            "\nAverage Travel Time From Colombo:7h 57min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", nallurkandaswamydevasthanamprice);
        }
        else if (strcmp(place, "Nagadeepa") == 0) {
                printf(
            "\n About: Nagadeepa Purana Vihara is an ancient Buddhist temple situated in Jaffna district of Northern Province, Sri Lanka. It is among the country's sixteen holiest Buddhist shrines (Solosmasthana).[1] According to contemporary history, the Gautama Buddha visited the site after five years of attaining Enlightenment to settle the dispute between two warring Naga kings, Chulodara�and�Mahodara. \n"
            "\nColombo to Destination Distance:423km\n"
            "\nAverage Travel Time From Colombo:8h 59min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", nagadeepaprice);
        }
        else if (strcmp(place, "Jaffna_Dutch_Fort") == 0) {
                printf(
            "\n About: Jaffna Fort is a fort built by the Portuguese at Jaffna, Sri Lanka, in 1618 under Phillippe de Oliveira following the Portuguese invasion of Jaffna. The fort is located near the coastal village of Gurunagar. Owing to numerous miracles attributed to the statue of the Virgin Mary in the church nearby, the fort was named as Fortress of Our Lady of Miracles of Jafanapat�o (Fortaleza de Nossa Senhora dos Milagres de Jafanapat�o). It was captured by the Dutch under Rijcklof van Goens in 1658, who expanded the structure. In 1795, it was taken over by the British, and remained under the control of a British garrison�until�1948. \n"
            "\nColombo to Destination Distance:338km\n"
            "\nAverage Travel Time From Colombo:7h 59min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", dutchfortjaffnaprice);
        }
        else if (strcmp(place, "Pannai_Beach") == 0) {
                printf(
            "\n About: Nestled along the inviting coastlines of Jaffna, Sri Lanka, Pannai Beach Resort presents an idyllic retreat with its stretch of golden sands that span a scenic length, offering a serene ambiance away from the bustling city life. The beach does not facilitate activities like surfing or camping, but it offers unparalleled relaxation with its pristine conditions and soothing ocean breezes, perfect for sunbathing, leisurely strolls, and picnicking. Pannai Beach Resort has few amenities, so plan your trip accordingly, although it does not allow dogs, provide access for the disabled, offer restrooms, or permit nude�sunbathing. \n"
            "\nColombo to Destination Distance:389km\n"
            "\nAverage Travel Time From Colombo:8h ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", pannaibeachprice);
        }
        else if (strcmp(place, "Jaffna_Archeological_Museum") == 0) {
                printf(
            "\n About: Jaffna Archaeological Museum is located in Nallur, Jaffna, Sri Lanka. The land was given to museum by Arumuga Navalar Foundation, and front portion has Navalar Cultural Hall. The museum houses a rare collection�of�antiquities. \n"
            "\nColombo to Destination Distance:387km\n"
            "\nAverage Travel Time From Colombo:7h 56min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", jaffnaarcheologicalmuseumprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Jaffna District & Prices Of them--\n");
        printf("01. Fox Jaffna-- LKR. ");
        printf("%d", foxjaffnaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", foxjaffnaadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Northgate Jaffna-- LKR. ");
        printf("%d", northgatejaffnaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", northgatejaffnaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Jaffna Heritage Hotel-- LKR. ");
        printf("%d",  jaffnaheritagehoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", jaffnaheritagehoteladult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Fox_Jaffna") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*foxjaffnaadult;
            y=(memberchild*foxjaffnaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", jaffnacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*jaffnaavgcost;
            o=memberchild*(jaffnaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(jaffnacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(jaffnacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Northgate_Jaffna") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*northgatejaffnaadult;
            y=(memberchild*northgatejaffnaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", jaffnacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*jaffnaavgcost;
            o=memberchild*(jaffnaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(jaffnacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(jaffnacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Jaffna_Heritage_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*jaffnaheritagehoteladult;
            y=(memberchild*jaffnaheritagehoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", jaffnacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*jaffnaavgcost;
            o=memberchild*(jaffnaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(jaffnacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(jaffnacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Kalutara") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Kalutara:\n"
            "01. Richmond Castle\n"
            "02. Kalutara Bodhiya\n"
            "03. Thudugala Ella\n"
            "04. Kalutara Beach\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Richmond_Castle") == 0) {
        printf(
            "\n About: Richmond Castle is an Edwardian mansion, located near Kalutara. Built between 1900 and 1910, it was formally the country seat of Mudaliyar Don Arthur de Silva Wijesinghe Siriwardena. The building is currently owned by the Public Trustee and open�to�the�public. \n"
            "\nColombo to Destination Distance:47km\n"
            "\nAverage Travel Time From Colombo:1h 25min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", richmondcastleprice);
        }
        else if (strcmp(place, "Kalutara_Bodhiya") == 0) {
                printf(
            "\n About: The Kalutara Chaitya is a Stupa located immediately south of the Kalutara Bridge in the Kalutara District of Sri Lanka. It is one of only a few hollow Buddhist stupas in the world and its interior contains 74 murals, each depicting a different aspect of the�Buddha's�life. \n"
            "\nColombo to Destination Distance:43.8km\n"
            "\nAverage Travel Time From Colombo:1h 19min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kalutarabodhiyaprice);
        }
        else if (strcmp(place, "Thudugala_Ella") == 0) {
                printf(
            "\n About: The Thudugala Ella waterfall is located in Thudugala village in Dodangoda Divisional Secretariat in Kalutara District of Western Province, Sri Lanka. Out of around 382 recorded waterfalls in Sri Lanka, the rank of�this�is�268th. \n"
            "\nColombo to Destination Distance:57.6km\n"
            "\nAverage Travel Time From Colombo:1h 46min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", thudugalaellaprice);
        }
        else if (strcmp(place, "Kalutara_Beach") == 0) {
                printf(
            "\n About: The Kalutara Beach itself is one of the best beaches in Sri Lanka. Known for its sunny and warm climate almost throughout the entire year, the Kalutara Beach is a long undisturbed stretch of golden sandy beach strip which starts from Waskaduwa and terminates at the estuary�of�Kalu�River. \n"
            "\nColombo to Destination Distance:41.1km\n"
            "\nAverage Travel Time From Colombo:1h 16min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kalutarabeachprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");

        }



        printf("\n--These are the Hotels around the Kalutara District & Prices Of them--\n");
        printf("01. Turyaa Kalutara-- LKR. ");
        printf("%d", turyaakalutaraadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", turyaakalutaraadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Avani Kalutara Resort-- LKR. ");
        printf("%d", avanikalutararesortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", avanikalutararesortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Citus Waskaduwa-- LKR. ");
        printf("%d",  cituswaskaduwaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", cituswaskaduwaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Turyaa_Kalutara") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*turyaakalutaraadult;
            y=(memberchild*turyaakalutaraadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kalutaracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kalutaraavgcost;
            o=memberchild*(kalutaraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(kalutaracost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kalutaracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Avani_Kalutara_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*avanikalutararesortadult;
            y=(memberchild*avanikalutararesortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);


            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kalutaracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kalutaraavgcost;
            o=memberchild*(kalutaraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(kalutaracost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kalutaracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Citus_Waskaduwa") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*cituswaskaduwaadult;
            y=(memberchild*avanikalutararesortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kalutaracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kalutaraavgcost;
            o=memberchild*(kalutaraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(kalutaracost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kalutaracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Kandy") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Kandy:\n"
            "01. Temple Of The Tooth\n"
            "02. Kandy National Museum\n"
            "03. Peradeniya Botanical Garden\n"
            "04. Kandy Lake\n"
            "05. Bahirawakanda Temple\n"
        );

        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Temple_Of_The_Tooth") == 0) {
            printf(
            "\nAbout: Sri Dalada Maligawa, commonly known in English as the Temple of the Sacred Tooth Relic, is a Buddhist temple in Kandy, Sri Lanka.\n"
            "\nColombo to Destination Distance:116km\n"
            "\nAverage Travel Time From Colombo:3h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", sridaladamaligawaprice);
        }
        else if (strcmp(place, "Kandy_National_Museum") == 0) {
            printf(
            "\nAbout: The National Museum of Kandy in Kandy, Sri Lanka is located next to the Temple of the Tooth in part of the former Royal Palace of Kandy. The primary exhibits are housed in the Palle Vahala building, which was the former home of the King's harem. A secondary exhibition is located in the main palace building. \n"
            "\nColombo to Destination Distance:118km\n"
            "\nAverage Travel Time From Colombo:3h 26min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kandynationalmuseumprice);
        }
        else if (strcmp(place, "Peradeniya_Botanical_Garden") == 0) {
            printf(
            "\nAbout: Royal Botanic Gardens, Peradeniya are about 5.5 km to the west of the city of Kandy in the Central Province of Sri Lanka. It is near the Mahaweli River. It is renowned for its collection of orchids.\n"
            "\nColombo to Destination Distance:109km\n"
            "\nAverage Travel Time From Colombo:3h 3min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", peradeniyabotanicalgardenprice);
        }
        else if (strcmp(place, "Kandy_Lake") == 0) {
            printf(
            "\nAbout: Kandy Lake also known as Kiri Muhuda or the Sea of Milk, is an artificial lake in the heart of the hill city of Kandy, Sri Lanka, built in 1807 by King Sri Wickrama Rajasinghe next to the Temple of the Tooth. \n"
            "\nColombo to Destination Distance:118km\n"
            "\nAverage Travel Time From Colombo:3h 5min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kandylakeprice);
        }
        else if (strcmp(place, "Bahirawakanda_Temple") == 0) {
            printf(
            "\nAbout: The temple on the hill of Bahirawakanda, called the Sri Maha Bodhi Viharaya, is most well-known to tourists for its giant Buddha statue, which can be seen from almost any point in the city of Kandy. Built in 1972, the statue shows Lord Buddha seated in the Nirvana pose, which is the position associated with his first Enlightenment. Reaching a height of more than 25 meters, it is one of the tallest statues of Buddha in Sri Lanka.\n"
            "\nColombo to Destination Distance:116km\n"
            "\nAverage Travel Time From Colombo:3h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", bahirawakandatempleprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Kandy District & Prices Of them--\n");
        printf("01. Cafe Aroma Inn-- LKR. ");
        printf("%d", cafeavomainnadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", cafeavomainnadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Hotel Travellers Nest Kandy-- LKR. ");
        printf("%d", hoteltravellersnestkandyadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hoteltravellersnestkandyadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. The Radh Hotel-- LKR. ");
        printf("%d", theradhwallawwaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", theradhwallawwaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Cafe_Aroma_Inn") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*cafeavomainnadult;
            y=(memberchild*cafeavomainnadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kandycost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kandyavgcost;
            o=memberchild*(kandyavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kandycost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hotel_Travellers_Nest_Kandy") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hoteltravellersnestkandyadult;
            y=(memberchild*hoteltravellersnestkandyadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kandycost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kandyavgcost;
            o=memberchild*(kandyavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kandycost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "The_Radh_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*theradhwallawwaadult;
            y=(memberchild*theradhwallawwaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kandycost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kandyavgcost;
            o=memberchild*(kandyavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kandycost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }


    else if (strcmp(district, "Kegalle") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Kegalle:\n"
            "01. Jubili Ambalama\n"
            "02. Kurulu Kale Senctuary\n"
            "03. Dombana\n"
            "04. Galgediyana Waterfall\n"
            "05. Pinnawala Elephant Orphanage\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Jubili_Ambalama") == 0) {
        printf(
            "\n About: The Jubilee Ambalama is an old wayside resthouse situated in the middle of Kegalle town,�Sri�Lanka. \n"
            "\nColombo to Destination Distance:60km\n"
            "\nAverage Travel Time From Colombo:1h 49min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", jubiliambalamaprice);
        }
        else if (strcmp(place, " Kurulu_Kale_Senctuary") == 0) {
                printf(
            "\n About: Kurulu Kele� is located in the lowland wet zone and was declared as a sanctuary in 1941 due to its abundant bird and plant diversity. However, due to its location in the centre of a city, this sanctuary faces lot of�human�pressure.\n"
            "\nColombo to Destination Distance:78.9km\n"
            "\nAverage Travel Time From Colombo:2h 10min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kurulukelesencturyprice);
        }
        else if (strcmp(place, "Dombana") == 0) {
                printf(
            "\n About: Dombana is a Nature preserve located in Undugoda. It is one of the 221 Nature preserves in Sri Lanka. Address of Dombana is Kegalle-Bulathkohupitiya-Karawanella Hwy, Undugoda, Sri Lanka. Dombana is located in a remote area, with less than 1 listed places around it.\n"
            "\nColombo to Destination Distance:79.5km\n"
            "\nAverage Travel Time From Colombo:2h 31min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", dambanaprice);
        }
        else if (strcmp(place, "Galgediyana_Waterfall") == 0) {
                printf(
            "\n About: The Galgediyana Ella Waterfall, in Gurugoda Oya (river), is a mere 5m high but 50m wide. Located in the Kegalle�District. \n"
            "\nColombo to Destination Distance:81.1km\n"
            "\nAverage Travel Time From Colombo:2h 13min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", galgediyanawaterfallprice);
        }
        else if (strcmp(place, "Pinnawala_Elephant_Orphanage") == 0) {
                printf(
            "\n About: Pinnawala Elephant Orphanage, is a captive breeding and conservation institute for wild Asian elephants located at Pinnawala village, 13 km northeast of Kegalle town in Sabaragamuwa Province of Sri Lanka. Pinnawala has the largest herd of captive elephants�in�the�world. \n"
            "\nColombo to Destination Distance:86.7km\n"
            "\nAverage Travel Time From Colombo:2h 22min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", pinnawalaelephantorphanageprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Kegalle District & Prices Of them--\n");
        printf("01. Bogala Village Eco Resort-- LKR. ");
        printf("%d",bogalavillageecoresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",bogalavillageecoresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. The Grand Walawwa-- LKR. ");
        printf("%d", thegrandwalawwaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", thegrandwalawwaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Heaven Hides Narangala-- LKR. ");
        printf("%d",heavenhidesnarangalaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",heavenhidesnarangalaadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Bogala_Village_Eco_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*bogalavillageecoresortadult;
            y=(memberchild*bogalavillageecoresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kegallecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kegalleavgcost;
            o=memberchild*(kegalleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kegallecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "The_Grand_Walawwa") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*thegrandwalawwaadult;
            y=(memberchild*thegrandwalawwaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kegallecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kegalleavgcost;
            o=memberchild*(kegalleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kegallecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Heaven_Hides_Narangala") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*heavenhidesnarangalaadult;
            y=(memberchild*heavenhidesnarangalaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kegallecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kegalleavgcost;
            o=memberchild*(kegalleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kegallecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Kilinochchi") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Kilinochchi:\n"
            "01. Green Park\n"
            "02. War memorial Monument\n"
            "03. Old Water Tank\n"
            "04. Murippu Kulam\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Green_Park") == 0) {
        printf(
            "\n About: It is very nice park maintain by Karachi pradesiya sabha . Full of greenish element and childrens playing element . There is a hanging bridge it is wonderful experience . Foods and cooldring in the shop . We can eat in the park . Lot benches in the park and people can chill up them self. \n"
            "\nColombo to Destination Distance:324km\n"
            "\nAverage Travel Time From Colombo:6h 43min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", greenparkprice);
        }
        else if (strcmp(place, "War_memorial_Monument") == 0) {
                printf(
            "\n About:  Kilinochchi War Memorial is a historical monument which is situated in Kilinochchi in the northern province of Sri Lanka. It used to be cemetery where the bodies of LTTE cadres were buried during the civil war in Sri Lanka. At present it serves as a memorabilia of the war which was won by the Sri Lankan troops in 2009. The monument is a commemoration for the Sri Lankan military forces for the sacrifices made by them during the war.\n"
            "\nColombo to Destination Distance:324km\n"
            "\nAverage Travel Time From Colombo:6h 42min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", warmemorialmonumentprice);
        }
        else if (strcmp(place, "Old_Water_Tank") == 0) {
                printf(
            "\n About: Vanni dry zone people had to collect water from the tanks, which increased the risks of waterborne diseases. The central government, with assistance of the government of Japan, built two new water towers and water pipelines in the Kilinochchi area. The fallen water tank was left as a memorial of the destructive forces of war. In 2014, the broken water tower was fenced off and turned into a monument officially.\n"
            "\nColombo to Destination Distance:326km\n"
            "\nAverage Travel Time From Colombo:6h 46min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", oldwatertankprice);
        }
        else if (strcmp(place, "Murippu_Kulam") == 0) {
                printf(
            "\n About: Murippu Kulam. The river which is near in kilinochchi. Nice place to have bath and fun. \n"
            "\nColombo to Destination Distance:328km\n"
            "\nAverage Travel Time From Colombo:6h 53min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", murippukulamprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Kilinochchi District & Prices Of them--\n");
        printf("01. Dream City Hotel-- LKR. ");
        printf("%d", dreamcityhoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", dreamcityhoteladult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Reecha Organic Resort Jaffna-- LKR. ");
        printf("%d", reechaorganicresortjaffnaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", reechaorganicresortjaffnaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. RJ Mahaal Hotel-- LKR. ");
        printf("%d", rjmahaalhoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", rjmahaalhoteladult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Dream_City_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*dreamcityhoteladult;
            y=(memberchild*dreamcityhoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kilinochchicost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kilinochchiavgcost;
            o=memberchild*(kilinochchiavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kilinochchicost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Reecha_Organic_Resort_Jaffna") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*reechaorganicresortjaffnaadult;
            y=(memberchild*reechaorganicresortjaffnaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kilinochchicost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kilinochchiavgcost;
            o=memberchild*(kilinochchiavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kilinochchicost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "RJ_Mahaal_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*rjmahaalhoteladult;
            y=(memberchild*rjmahaalhoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kilinochchicost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kilinochchiavgcost;
            o=memberchild*(kilinochchiavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kilinochchicost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Kurunegala") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Kurunegala:\n"
            "01. Athugala Viharaya\n"
            "02. Dalada Maligawa-Kurunegala Kingdom\n"
            "03. Maraluwawa Raja Maha Viharaya\n"
            "04. Athkada Raja Maha Viharaya\n"
            "05. Wewala Waterfall\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Athugala_Viharaya") == 0) {
        printf(
            "\n About: This temple houses to the huge 88 ft Buddha statue. The great bare rock mountain provides a perfect setting for the Buddha statue. \n"
            "\nColombo to Destination Distance:95.5km\n"
            "\nAverage Travel Time From Colombo:2h 36min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", athugalaviharayaprice);
        }
        else if (strcmp(place, "Dalada_Maligawa-Kurunegala_Kingdom") == 0) {
                printf(
            "\n About: The old city of Kurunegala Kingdom was spread between Kuruminigala and Ibbagala, bounded by Athugala. Even today ruins of the palace complex, the Temple of Tooth (Dalada Maligawa) and other buildings inside a semi-circular are found on this strip of land between Athugala and Kuruminigala.\n"
            "\nColombo to Destination Distance:95.6km\n"
            "\nAverage Travel Time From Colombo:2h 36min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", daladamaligawakurunegalakingdomprice);
        }
        else if (strcmp(place, "Maraluwawa_Raja_Maha_Viharaya") == 0) {
                printf(
            "\n About: Maraluwawa Rajamaha Viharaya is an ancient temple complex lying on the top of Andagala Rock close to the Kurunegala town going as far as King Dutugemunu (161-131 BC).\n"
            "\nColombo to Destination Distance:97.9km\n"
            "\nAverage Travel Time From Colombo:2h 38min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", maraluwawarajamahaviharayaprice);
        }
        else if (strcmp(place, "Athkada_Rajamaha_Viharaya") == 0) {
                printf(
            "\n About: Athkanda Rajamaha Viharaya is an ancient Buddhist Monastry / Temple in the heart of Kurunegala city. There is a rock cave temple with ancient paintings. \n"
            "\nColombo to Destination Distance:93.4km\n"
            "\nAverage Travel Time From Colombo:2h 29min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", athkadarajamahaviharayaprice);
        }
        else if (strcmp(place, "Wewala_Waterfall") == 0) {
                printf(
            "\n About: There are two parts of Wewala Falls. One is the Upper Falls and the other is the Lower Falls. The upper falls is about 3 meters high. The lower falls is about 8 meters high.About 10 feet deep at the top of the Wewala Falls, and about 6 feet deep on normal days. \n"
            "\nColombo to Destination Distance:82.2km\n"
            "\nAverage Travel Time From Colombo:2h 13min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", wewalawaterfallprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Kurungeala District & Prices Of them--\n");
        printf("01. Silver Hill Eco Village-- LKR. ");
        printf("%d",silverhillecovillageadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",silverhillecovillageadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Mangala Lodge-- LKR. ");
        printf("%d", mangalalodgeadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", mangalalodgeadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Kandyan Reach Hotel-- LKR. ");
        printf("%d",kandyanreachhoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",kandyanreachhoteladult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Silver_Hill_Eco_Village") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult* silverhillecovillageadult;
            y=(memberchild* silverhillecovillageadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kurunegalacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kurunegalaavgcost;
            o=memberchild*(kurunegalaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kurunegalacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");

        }

        else if (strcmp(hotels, "Mangala_Lodge") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*mangalalodgeadult;
            y=(memberchild*mangalalodgeadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kurunegalacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);
            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kurunegalaavgcost;
            o=memberchild*(kurunegalaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kurunegalacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");

        }

        else if (strcmp(hotels, "Kandyan_Reach_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*kandyanreachhoteladult;
            y=(memberchild*kandyanreachhoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", kurunegalacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*kurunegalaavgcost;
            o=memberchild*(kurunegalaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(kurunegalacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");

        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Mannar") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Mannar:\n"
            "01. Mannar Dutch Fort\n"
            "02. Talaimannar Lighthouse\n"
            "03. South Bar Beach\n"
            "04. Bird Watching Tower\n"
            "05. Kattukkarai Kulam\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Mannar_Dutch_Fort") == 0) {
        printf(
            "\n About: Mannar Fort is located on Mannar Island, Sri Lanka. It was built by Portuguese in 1560 and christened S�o Jorge. The fort fell to the Dutch in 1658, and they rebuilt the fort in 1696. In 1795 the British occupied the fort following the surrender by the Dutch. \n"
            "\nColombo to Destination Distance:309km\n"
            "\nAverage Travel Time From Colombo:6h 28min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", mannardutchfortprice);
        }
        else if (strcmp(place, "Talaimannar_Lighthouse") == 0) {
                printf(
            "\n About: Mannar Island Lighthouse is a lighthouse in Talaimannar on Mannar Island in northern Sri Lanka. Built in 1915, the 19 metres white lighthouse has a round cylindrical tower with lantern and gallery. \n"
            "\nColombo to Destination Distance:339km\n"
            "\nAverage Travel Time From Colombo:7h 8min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", thalaimannarlighthouseprice);
        }
        else if (strcmp(place, "South_bar_Beach") == 0) {
                printf(
            "\n About: South Bar is a populated place and is located in Northern Province, Sri Lanka. The estimate terrain elevation above seal level is 1 metres. Variant forms of spelling for South Bar or in other languages \n"
            "\nColombo to Destination Distance:312km\n"
            "\nAverage Travel Time From Colombo:6h 35min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", southbarbeachprice );
        }
        else if (strcmp(place, "Bird_Watching_Tower") == 0) {
                printf(
            "\n About: Good place for watching sea and marsh birds in Mannar causeway. If the tower is closed, you can visit Wild Life Office near by and ask their assistance. They are very supportive. You don't need to pay any fee for visit this place. \n"
            "\nColombo to Destination Distance:304km\n"
            "\nAverage Travel Time From Colombo:6h 22min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", birdwatchingtowerprice);
        }
        else if (strcmp(place, "Kattukkarai_Kulam") == 0) {
                printf(
            "\n About: 2nd largest tank in the Northern Province of Sri Lanka. thousands of acres paddy fields gets benefit. \n"
            "\nColombo to Destination Distance:228km\n"
            "\nAverage Travel Time From Colombo:6h 4min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kattukkaraikulamprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Mannar District & Prices Of them--\n");
        printf("01. Ousis Wings Hotel-- LKR. ");
        printf("%d", ousiswingshoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", ousiswingshoteladult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Hotel Agape-- LKR. ");
        printf("%d", hotelagapeadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hotelagapeadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. The Palmyrah-- LKR. ");
        printf("%d",  thepalmyrahadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", thepalmyrahadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Ousis_Wings_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*ousiswingshoteladult;
            y=(memberchild*ousiswingshoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mannarcost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mennaravgcost;
            o=memberchild*(mennaravgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mannarcost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hotel_Agape") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hotelagapeadult;
            y=(memberchild*hotelagapeadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mannarcost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mennaravgcost;
            o=memberchild*(mennaravgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mannarcost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "The_Palmyrah") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*thepalmyrahadult;
            y=(memberchild*thepalmyrahadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mannarcost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mennaravgcost;
            o=memberchild*(mennaravgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mannarcost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Matale") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Matale:\n"
            "01. Aluwihara Temple\n"
            "02. Riverston\n"
            "03. Sri Muthumari Amman Kovil\n"
            "04. Babarakiri Ellla\n"
            "05. Nalanda Gedige\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Aluwihara_Temple") == 0) {
        printf(
            "\n About: Aluvihare is a suburb of Matale, in Central Province of Sri Lanka. It lies 3.5 km north of Matale and 150 km north-east of the capital Colombo. The suburb is situated on the Kandy-Jaffna highway. It was founded by King Devanampiyatissa,�around�300�B.C \n"
            "\nColombo to Destination Distance:141km\n"
            "\nAverage Travel Time From Colombo:3h 41min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", aluwiharetempleprice);
        }
        else if (strcmp(place, "Riverston") == 0) {
                printf(
            "\n About: Riverston is an area that belongs to the Matale district. It is one of the favorite hiking spots of many hikers. Also, it is a part of the Knuckles Mountain Range, which is known as a world heritage site. Riverston is located between the District of Matale and the District�of�Kandy..\n"
            "\nColombo to Destination Distance:166km\n"
            "\nAverage Travel Time From Colombo:4h 48min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", riverstonprice);
        }
        else if (strcmp(place, "Sri_Muthumari_Amman_Kovil") == 0) {
                printf(
            "\n About: Muthumariamman Temple or Arulmigu Sri Muthumari Amman Kovil is a Hindu temple in Matale, Sri Lanka. The prefix muthu literally means pearl. Mari means rain and Amman means mother in Tamil language. The temple is dedicated to Mariamman, the goddess of rain�and�fertility..\n"
            "\nColombo to Destination Distance:142km\n"
            "\nAverage Travel Time From Colombo:3h 45min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", srimuthumariammankovilprice);
        }
        else if (strcmp(place, "Babarakiri_Ellla") == 0) {
                printf(
            "\n About: Rattota, Matale district. The fall of this waterfall is about 10m and can be viewed from�three�parts. \n"
            "\nColombo to Destination Distance:155km\n"
            "\nAverage Travel Time From Colombo:4h 11min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", babarakiriellaprice);
        }
        else if (strcmp(place, "Nalanda_Gedige") == 0) {
                printf(
            "\n About: Nalanda Gedige is an ancient complete stone temple near Matale, Sri Lanka and its original site is considered the geographical centre�of�Sri�Lanka. \n"
            "\nColombo to Destination Distance:143km\n"
            "\nAverage Travel Time From Colombo:3h 43min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", nalandagedigeprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Matale District & Prices Of them--\n");
        printf("01. Lakegala Resort-- LKR. ");
        printf("%d",lakegalaresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",lakegalaresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. The Covanro Sigiriya-- LKR. ");
        printf("%d",thecovanrosigiriyaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",thecovanrosigiriyaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Amaya Lake Dambulla-- LKR. ");
        printf("%d",amayalakedambullaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", amayalakedambullaadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Lakegala_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult* lakegalaresortadult;
            y=(memberchild* lakegalaresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", matalecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mataleavgcost;
            o=memberchild*(mataleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(matalecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "The_Covanro_Sigiriya") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*thecovanrosigiriyaadult;
            y=(memberchild*thecovanrosigiriyaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", matalecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mataleavgcost;
            o=memberchild*(mataleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(matalecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Amaya_Lake_Dambulla") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult* amayalakedambullaadult;
            y=(memberchild* amayalakedambullaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", matalecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mataleavgcost;
            o=memberchild*(mataleavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(matalecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Matara") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Matara:\n"
            "01. Star Fort\n"
            "02. Coconut Tree hill\n"
            "03. Paravi Duwa Beach\n"
            "04. Matara Beach Park\n"
            "05. Tsunami Memorial\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Star_Fort") == 0) {
        printf(
            "\n About: The Star Fort is a fort in Matara, Sri Lanka, located on the eastern bank of the Nilwala River, approximately 350 metres from the gate to the Matara fort. It was constructed by the Dutch in 1765, and was originally called Redoute�Van�Eck. \n"
            "\nColombo to Destination Distance:162km\n"
            "\nAverage Travel Time From Colombo:4h 19min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", starfortprice);
        }
        else if (strcmp(place, "Coconut_Tree_Hill") == 0) {
                printf(
            "\n About: Having made its way to almost every traveller’s Instagram profile when they visit Mirissa, the Coconut Tree Hill is a must-do when you’re in Mirissa. The Coconut Tree Hill is a private coconut estate with a nearby temple set on a high cliff overlooking the glistening waters of the Indian Ocean and the untouched stretch of golden beach. Located in proximity to the town, the hill can be accessed throughout the day or night; at no cost.\n"
            "\nColombo to Destination Distance:153km\n"
            "\nAverage Travel Time From Colombo:4h 3min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", coconuttreehillprice);
        }
        else if (strcmp(place, "Paravi_Duwa_Beach") == 0) {
                printf(
            "\n About: It is a small island off Matara beach right in the town center. There is a nice Buddist temple there, still under construction. Very nice views from the temple.\n"
            "\nColombo to Destination Distance:163km\n"
            "\nAverage Travel Time From Colombo:4h 21min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", parawiduuwabeachprice);
        }
        else if (strcmp(place, "Matara_Beach_Park") == 0) {
                printf(
            "\n About: Nice sunset view point, largest beach with car park, kids playing space, and large space for any kind of games you can enjoy your evening with family or friends and with your love or relaxing, front of the beach having some restaurant and street foods.\n"
            "\nColombo to Destination Distance:163km\n"
            "\nAverage Travel Time From Colombo:4h 22min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", matarabeachprice);
        }
        else if (strcmp(place, "Tsunami_Memorial") == 0) {
                printf(
            "\n About: This small monument remembers the 35,000 people who lost their lives just in Sri Lanka during the 2004 tsunami and the hundreds of thousands of others whose lives were changed profoundly. It was around here that the tsunami washed away a packed commuter train with the loss of over 1200 lives – the world's worst ever train disaster.\n"
            "\nColombo to Destination Distance:95.9km\n"
            "\nAverage Travel Time From Colombo:2h 38min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", tsunamimemorialprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Matara District & Prices Of them--\n");
        printf("01. Lake Raj Heritage-- LKR. ");
        printf("%d", lakrajheritageadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", lakrajheritageadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Polhena Grand Resort-- LKR. ");
        printf("%d", polhenagrandresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", polhenagrandresortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. The Seascape-- LKR. ");
        printf("%d", theseascapeadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", theseascapeadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Lake_Raj_Heritage") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*lakrajheritageadult;
            y=(memberchild*lakrajheritageadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mataracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mataraavgcost;
            o=memberchild*(mataraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mataracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Polhena_Grand_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*polhenagrandresortadult;
            y=(memberchild*polhenagrandresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mataracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mataraavgcost;
            o=memberchild*(mataraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mataracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "The_Seascape") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*theseascapeadult;
            y=(memberchild*theseascapeadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mataracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mataraavgcost;
            o=memberchild*(mataraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mataracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Monaragala") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Monaragala:\n"
            "01. Pareiyan Ella\n"
            "02. Dematamal Viharaya\n"
            "03. Maragal Mountain View Point\n"
            "04. Ancient Ponds\n"
            "05. Mayuragiri Len Sthoopa\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Pareiyan_Ella") == 0) {
        printf(
            "\n About: Pareiyan Ella Falls is created by the Manik River.It is located in the small village of Atala in the Badal Kubura area in the Monaragala District. About five 5Km from Badalkubura town on Buttala road, Come to Old Gamsaba Road. on the right side of the road, the sign leading to Pareiyan Ella Falls is waiting for you. The area may have been called Punsisigama. You have also marked the distance as 2 km so as not to make further mistakes. \n"
            "\nColombo to Destination Distance:249km\n"
            "\nAverage Travel Time From Colombo:5h 49min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", pareiyanellaprice);
        }
        else if (strcmp(place, "Dematamal_Viharaya") == 0) {
                printf(
            "\n About: village, Monaragala district, Sri Lanka. The Stupa of Dematamal Viharaya is considered as one of the oldest Stupas in Sri Lanka built in the 2nd Century BC.According to folklore, it is the place which provided safety to Prince Saddhatissa, who was attempting to flee after losing the fight with his elder brother, Prince Dutugamunu.\n"
            "\nColombo to Destination Distance:244km\n"
            "\nAverage Travel Time From Colombo:5h 44min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", dematamalviharayaprice);
        }
        else if (strcmp(place, "Maragal_Mountain_View_Point") == 0) {
                printf(
            "\n About: Nestled in the heart of the Monaragala district in �Sri Lanka lies a hidden gem waiting to be discovered Maragala Kanda, a majestic mountain steeped in natural beauty and rich cultural heritage. From its breathtaking vistas to its sacred sites, Maragala Kanda offers a journey of exploration and wonder for adventurers and nature enthusiasts alike.\n"
            "\nColombo to Destination Distance:265km\n"
            "\nAverage Travel Time From Colombo:6h 12min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", maragalmountainviewpointprice);
        }
        else if (strcmp(place, "Ancient_Ponds") == 0) {
                printf(
            "\n About: Located in Galabedda, about 9 kilometers away from the A4 Monaragala - Pottuvil Road, this is an ancient pond built in the 12th-century. It is believed that the warrior Queen Sugala used this pond. The square shaped pond is built with granite rocks, on the four sides it has beautifully carved dragon faces which let water in the pond. There are remains of an ancient toilet made with granite and with amazing carvings. According to the historical records Queen Sugala ruled Ruhunu Rata from the Galabedda area, and it is believed that her palace has been in the neighbourhood of the pond. Queen Sugala is an interesting female warrior in the history of Sri Lanka. \n"
            "\nColombo to Destination Distance:267km\n"
            "\nAverage Travel Time From Colombo:6h 14min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", ancientpondsprice);
        }
        else if (strcmp(place, "Mayuragiri_Len_Sthoopa") == 0) {
                printf(
            "\n About: Monaragala Rajamaha Viharaya, also known as Mayuragiri Len Viharaya lies on a rocky mountain about 1 km away from the Monaragala town.According to legend, this cave temple complex saw its peak during the 12th century when the heroic Queen Sugala Devi selected this temple to hold the tooth relic and the bowl relic of Buddha for about 75 years.Sugala Devi was the wife of Sri Wallabha who reigned the Ruhunu kingdom in the 12th century. The ruling capital of Polonnaruwa had become unstable after demise of the King Vijayabahu I and the Tooth Relic was brought to Ruhuna by the custodian priests. After the death of Sri Wallabha, their son Manabharana became the ruler of the Ruhuna. \n"
            "\nColombo to Destination Distance:259km\n"
            "\nAverage Travel Time From Colombo:6h 5min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", mayuragirilensthoopaprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }



        printf("\n--These are the Hotels around the Monaragala District & Prices Of them--\n");
        printf("01. Kande Gedara Resort-- LKR. ");
        printf("%d",kandegedararesortadult);
        printf(" (For one Adult & one Night.)");
        printf("and LKR. ");
        printf("%d",kandegedararesortadult/2);
        printf(" (For one Child & one Night.)\n");


        printf("02. Capital Resort Inn-- LKR. ");
        printf("%d", capitalresortinnadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", capitalresortinnadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Sayon River Cottage and Eco Garden-- LKR. ");
        printf("%d",sayonrivercottageandecogardenadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",sayonrivercottageandecogardenadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Kande_Gedara_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*kandegedararesortadult;
            y=(memberchild*kandegedararesortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", moneragalacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*monaragalaavgcost;
            o=memberchild*(monaragalaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(moneragalacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Capital_Resort_Inn") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*capitalresortinnadult;
            y=(memberchild*capitalresortinnadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", moneragalacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*monaragalaavgcost;
            o=memberchild*(monaragalaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(moneragalacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Sayon_River_Cottage_and_Eco_Garden") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost:LKR. ");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*sayonrivercottageandecogardenadult;
            y=(memberchild*sayonrivercottageandecogardenadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", moneragalacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*monaragalaavgcost;
            o=memberchild*(monaragalaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(moneragalacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Mullaitivu") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Mullaitivu:\n"
            "01. Mullaitivu Beach\n"
            "02. Mullaitivu Camp War Memorial\n"
            "03. Nayaru Beach\n"
            "04. Muttu Lyankattu Kulam\n"
            "05. Pigeon Island Marine National Park\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Mullaitivu_Beach") == 0) {
        printf(
            "\n About: This is a tropical paradise in mullaitivu with free entry.The sand is soft and the turquoise water is so clear.can feel a good breeze.And a good place to bath.Not too crowded and also suitable for sunbathing. \n"
            "\nColombo to Destination Distance:322m\n"
            "\nAverage Travel Time From Colombo:6h 52min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", mullaitivubeachprice);
        }
        else if (strcmp(place, "Mullaitivu_Camp_War_Memorial") == 0) {
                printf(
            "\n About: A piece of Sri Lankan history that shouldn�t ever be forgotten. This place bringsout the sacrifices the Sri Lankan army went through for the freedom of this country.\n"
            "\nColombo to Destination Distance:321km\n"
            "\nAverage Travel Time From Colombo:6h 51min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", mullaitivucampwarmemorialprice);
        }
        else if (strcmp(place, " Nayaru_Beach") == 0) {
                printf(
            "\n About: The beach is awesome and one of the best hangout place for locals. The beach is clean and you can also fishing. Please take a local with you for guidance. The view Are definitely breathtaking.\n"
            "\nColombo to Destination Distance:324km\n"
            "\nAverage Travel Time From Colombo:7h 7min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", nayarubeachprice);
        }
        else if (strcmp(place, "Muttu_Lyankattu_Kulam") == 0) {
                printf(
            "\n About:This reservoir has been constructed across Per Aru stream. This tank can be reached through Puthukuduirrippu - Oddusudan road. The place can be visited  without any permission. the scenery is more beautiful in the evenings. This reservoir was fully  rehabilitated under Dam Safety and Water Resources Planning Project. \n"
            "\nColombo to Destination Distance:308km\n"
            "\nAverage Travel Time From Colombo:6h 40min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", muththulyankattukulamprice);
        }
        else if (strcmp(place, "Pigeon_Island_Marine_National_Park") == 0) {
                printf(
            "\n About: Pigeon Island National Park is one of the three marine national parks of Sri Lanka. The national park is situated 1 km off the coast of Nilaveli, a coastal town in Eastern Province, encompassing a total area of 471.429 hectares. The island's name derives from the rock pigeon which has colonized it. \n"
            "\nColombo to Destination Distance:272km\n"
            "\nAverage Travel Time From Colombo:6h 23min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", pigeonislandmarinenationalparkprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Mullaitivu District & Prices Of them--\n");
        printf("01. Mullaitivu Grand-- LKR. ");
        printf("%d", mulativegrandadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", mulativegrandadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Epic Resort-- LKR. ");
        printf("%d", epicresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", epicresortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03.  Alai Resort-- LKR. ");
        printf("%d",  alairesortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", alairesortadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Mullaitivu_Grand") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*mulativegrandadult;
            y=(memberchild*mulativegrandadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mullaitivucost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mullaitivucost;
            o=memberchild*(mullaitivucost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mullaitivucost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Epic_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*epicresortadult;
            y=(memberchild*epicresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mullaitivucost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mullaitivuavgcost;
            o=memberchild*(mullaitivuavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mullaitivucost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Alai_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*alairesortadult;
            y=(memberchild*alairesortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", mullaitivucost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mullaitivuavgcost;
            o=memberchild*(mullaitivuavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(mullaitivucost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(mullaitivucost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }


    else if (strcmp(district, "Nuwaraeliya") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Nuwaraeliya:\n"
            "01. Victoria Park\n"
            "02. Moon Plains\n"
            "03. Horton Plains National Park\n"
            "04. Devon Falls\n"
            "05. Hakgala Botanical Garden\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Victoria_Park") == 0) {
        printf(
            "\n About: Victoria Park is a public park located in Nuwara Eliya, next to the Nuwara Eliya Post Office in Sri Lanka. \n"
            "\nColombo to Destination Distance:152km\n"
            "\nAverage Travel Time From Colombo:4h 35min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", victoriaparkprice);
        }
        else if (strcmp(place, "Moon_Plains") == 0) {
                printf(
            "\n About: Moon Plains, also known as Sandathenna, is a 400-metre long, 40 metre deep valley in Ranhawadigama, about 6km from Nuwara Eliya. What was once part of a catchment area, Moon Plains is now a notable Agricultural and Environmental Tourism Zone since March 2014.\n"
            "\nColombo to Destination Distance:153km\n"
            "\nAverage Travel Time From Colombo:4h 39min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", moonplainsprice);
        }
        else if (strcmp(place, "Horton_Plains_National_Park") == 0) {
                printf(
            "\n About: Horton Plains National Park is a national park in the central highlands of Sri Lanka that was designated in 1988. It is located at an elevation of 2,100�2,300 m and encompasses montane grassland and cloud forest. It is rich in biodiversity and many species found here are endemic to the region.\n"
            "\nColombo to Destination Distance:174km\n"
            "\nAverage Travel Time From Colombo:5h 8min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hortonplainsnationalparkprice);
        }
        else if (strcmp(place, "Devon_Falls") == 0) {
                printf(
            "\n About: Devon Falls, known as the 'Veil of the Valley', is a waterfall in Sri Lanka, situated 6 km (3.7 mi) west of Talawakele, Nuwara Eliya District on the A7 highway. The falls is named after a pioneer English coffee planter called Devon. \n"
            "\nColombo to Destination Distance:127km\n"
            "\nAverage Travel Time From Colombo:3h 48min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", devonfallsprice);
        }
        else if (strcmp(place, "Hakgala_Botanical_Garden") == 0) {
                printf(
            "\n About: Hakgala Botanical Garden is one of the five botanical gardens in Sri Lanka. The other four are Peradeniya Botanical Garden, Henarathgoda Botanical Garden, Mirijjawila Botanical Garden and Seetawaka Botanical Garden. It is the second largest botanical garden in Sri Lanka. \n"
            "\nColombo to Destination Distance:158km\n"
            "\nAverage Travel Time From Colombo:4h 45min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", hakgalabotanicalgardenprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Nuwaraeliya District & Prices Of them--\n");
        printf("01. Queenswood Cottage-- LKR. ");
        printf("%d",queenswoodcottageadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",queenswoodcottageadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02.Galway Height Hotel-- LKR. ");
        printf("%d",galwayheighthoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",galwayheighthoteladult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. La Grand Villa-- LKR. ");
        printf("%d",lagrandvillaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d",lagrandvillaadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Queenswood_Cottage") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*queenswoodcottageadult;
            y=(memberchild*queenswoodcottageadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", nuwaraeliyacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*mullaitivuavgcost;
            o=memberchild*(mullaitivuavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(nuwaraeliyacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Galway_Height_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*galwayheighthoteladult;
            y=(memberchild*galwayheighthoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", nuwaraeliyacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*nuwaraeliyaavgcost;
            o=memberchild*(nuwaraeliyaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            printf("%d", (o+p)+(a+b)+(nuwaraeliyacost*days)+(otherex));

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(nuwaraeliyacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "La_Grand_Villa") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*lagrandvillaadult;
            y=(memberchild*lagrandvillaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", nuwaraeliyacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*nuwaraeliyaavgcost;
            o=memberchild*(nuwaraeliyaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(nuwaraeliyacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }


    else if (strcmp(district, "Polonnaruwa") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Polonnaruwa:\n"
            "01. Gal Viharaya\n"
            "02. Vatadage\n"
            "03. Dalada Maluwa\n"
            "04. Lotus Pond\n"
            "05. Polonnaruwa Ancient City\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Gal_Viharaya") == 0) {
        printf(
            "\n About: The Gal Vihara and known originally as the Uttararama  is a rock temple of the Buddha situated in the ancient city Polonnaruwa, the capital of the ancient Kingdom of Polonnaruwa, now present-day Polonnaruwa, in North Central Province, Sri Lanka. It was fashioned in the 12th century by King Parakramabahu I. The central feature of the temple is four rock relief statues of the Buddha, which have been carved into the face of a large granite gneiss rock. The images consist of a large seated figure, another smaller seated figure inside an artificial cavern, a standing figure, and a reclining figure. These are considered to be some of the best examples of ancient Sinhalese sculpting and carving arts, and have made the Gal Vihara the most visited monument at Polonnaruwa. \n"
            "\nColombo to Destination Distance:214km\n"
            "\nAverage Travel Time From Colombo:4h 58min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", galviharayaprice);
        }
        else if (strcmp(place, "Vatadage") == 0) {
                printf(
            "\n About: The Polonnaruwa Vatadage is an ancient structure dating back to the Kingdom of Polonnaruwa of Sri Lanka. It is believed to have been built during the reign of Parakramabahu I to hold the Relic of the tooth of the Buddha or during the reign of Nissanka Malla of Polonnaruwa to hold the alms bowl used by the Buddha..\n"
            "\nColombo to Destination Distance:214km\n"
            "\nAverage Travel Time From Colombo:4h 58min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", vatadageprice);
        }
        else if (strcmp(place, "Dalada_Maluwa") == 0) {
                printf(
            "\n About: The Entrance to the Dalada Maluwa is through stone steps. Left to these steps is a stone slab with 3 carved figures, a man pointing towards the Dalada Maluwa, a crow, and a dog. This is said to inform the people who come to worship the tooth relic that anybody who acts disrespectfully in the sacred area will be reborn as crow and dogs.\n"
            "\nColombo to Destination Distance:214km\n"
            "\nAverage Travel Time From Colombo:4h 58min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", daladamaluwaprice);
        }
        else if (strcmp(place, "Lotus_Pond") == 0) {
                printf(
            "\n About: The Pokuna or the baths found at Polonnaruwa are comparatively of modest dimensions. The architecturally perfect Kumara Pokuna found close to King Parakramabahu�s palace, the Pokuna found near the rest house and believed to be that of King Nissanka Malla, and the simple baths of the Alahana pirivena are some examples. \n"
            "\nColombo to Destination Distance:215km\n"
            "\nAverage Travel Time From Colombo:5h ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", lotuspondprice);
        }
        else if (strcmp(place, "Polonnaruwa_Ancient_City") == 0) {
                printf(
            "\n About: Polonnaruwa was the second capital of Sri Lanka after the destruction of Anuradhapura in 993. It comprises, besides the Brahmanic monuments built by the Cholas, the monumental ruins of the fabulous garden-city created by Parakramabahu I in the 12th century. \n"
            "\nColombo to Destination Distance:214km\n"
            "\nAverage Travel Time From Colombo:4h 58min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", polonnaruwaancientcityprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Polonnaruwa District & Prices Of them--\n");
        printf("01. Man Guest Polonnaruwa-- LKR. ");
        printf("%d", manguestpolonnaruwaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", manguestpolonnaruwaadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Siyanco Holiday Resort-- LKR. ");
        printf("%d", siyancoholidayresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", siyancoholidayresortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Giritale Hotel-- LKR. ");
        printf("%d", giritalehoteladult );
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", giritalehoteladult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Man_Guest_Polonnaruwa") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*manguestpolonnaruwaadult;
            y=(memberchild*manguestpolonnaruwaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", polonnaruwacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*polonnaruwaavgcost;
            o=memberchild*(polonnaruwaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(polonnaruwacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Siyanco_Holiday_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*siyancoholidayresortadult;
            y=(memberchild*siyancoholidayresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", polonnaruwacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*polonnaruwaavgcost;
            o=memberchild*(polonnaruwaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(polonnaruwacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Giritale_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*giritalehoteladult;
            y=(memberchild*giritalehoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", polonnaruwacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*polonnaruwaavgcost;
            o=memberchild*(polonnaruwaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(polonnaruwacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Puttalam") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Puttalam:\n"
            "01. New Puttalam Jetty\n"
            "02. Mi Oya Anicut\n"
            "03. Wilpattu National Park\n"
            "04. Puttalam Lagoon Island\n"
            "05. Neelambemma\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "New_Puttalam_Jetty") == 0) {
        printf(
            "\n About:The new Puttalam Jetty was inaugurated by the Sri Lanka Navy on 18 December 2021. Vice Admiral Nishantha Ulugetenna, the Commander of the Sri Lanka Navy, presided over the ceremony. The jetty, built by the Navy, serves as an important maritime infrastructure in the Puttalam district. Various dignitaries, including government officials, naval personnel, and school children, were present at the event. \n"
            "\nColombo to Destination Distance:132km\n"
            "\nAverage Travel Time From Colombo:3h 27min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", newputtalamjettyprice);
        }
        else if (strcmp(place, "Mi_Oya_Anicut") == 0) {
                printf(
            "\n About:The Mi Oya is a 108 km (67 mi) long river, in Sri Lanka. It is the fifteenth-longest river in the country. It begins in Saliyagama and flows northwest, emptying into the Indian Ocean through Puttalam.Its catchment area receives approximately 1,596 million cubic metres of rain per year, and approximately 3 percent of the water reaches the sea. It has a catchment area of 1,024 square kilometres. \n"
            "\nColombo to Destination Distance:142km\n"
            "\nAverage Travel Time From Colombo:3h 42min ( Without Expressway )\n"
           );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", mioyaanicutprice);
        }
        else if (strcmp(place, "Wilpattu_National_Park") == 0) {
                printf(
            "\n About: Wilpattu National Park is a national park in Sri Lanka. The unique feature of this park is the existence of Willus (natural lakes) � natural, sand-rimmed water basins or depressions that fill with rainwater. Located on the northwest coast lowland dry zone of Sri Lanka, the park is 30 km (19 mi) west of Anuradhapura and 26 km (16 mi) north of Puttalam (approximately 180 km (110 mi) north of Colombo). The park is 1,317 km2 (508 sq mi) (131,693 hectares) in area and ranges from 0�152 m (0�499 ft) above sea level. Nearly one hundred and six lakes (Willu) and tanks are found spread throughout Wilpattu. Wilpattu is the largest and one of the oldest national parks in Sri Lanka. Wilpattu is world-renowned for its leopard (Panthera pardus kotiya) population. A remote camera survey conducted in Wilpattu from July to October 2015 by the Wilderness and Wildlife Conservation Trust captured photographs of forty-nine individual leopards in the surveyed area, the core area density of which was between that of Yala National Park's Block I and Horton Plains National Park. \n"
            "\nColombo to Destination Distance:165km\n"
            "\nAverage Travel Time From Colombo:4h 8min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", wilpattunationalparkprice);
        }
        else if (strcmp(place, "Puttalam_Lagoon_Island") == 0) {
                printf(
            "\n About: The Puttalam Lagoon is a large 327 km lagoon in the Puttalam District, western Sri Lanka.The lagoon is fed by two rivers, namely the Kala Oya and Mi Oya, discharging at 2.2 m3/s and 8.1 m3/s respectively. It is linked to Mundal Lagoon 15 km to the south by a channel. The lagoon's water is brackish to saline.The lagoon is surrounded by a region containing coconuts, open forests, grasslands and shrublands. The land is used for prawn fishing, salt production, and rice cultivation. The lagoon has extensive mangroves, seagrasses and some salt marshes, attracting a wide variety of anatidae.\n"
            "\nColombo to Destination Distance:138km\n"
            "\nAverage Travel Time From Colombo:3h 39min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", puttalamlagoonislandprice);
        }
        else if (strcmp(place, "Neelambemma") == 0) {
                printf(
            "\n About: Dam built across Kala Oya for irrigation purposes. This is built bordering Wilpattu National Park. Elephant fence is established as wild elephants roam around in this area. \n"
            "\nColombo to Destination Distance:128km\n"
            "\nAverage Travel Time From Colombo:3h 21min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", neelabemmaprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Puttalam District & Prices Of them--\n");
        printf("01. Arachiwil Green Nature Resort-- LKR. ");
        printf("%d", arachiwilgreennatureresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", arachiwilgreennatureresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Royal Green Garden Hotel-- LKR. ");
        printf("%d", royalgreengardenhoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", royalgreengardenhoteladult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Cloud Nine-- LKR. ");
        printf("%d", cloudnineadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", cloudnineadult/2);
        printf(" (For one Child , For one�Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Arachiwil_Green_Nature_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*arachiwilgreennatureresortadult;
            y=(memberchild*arachiwilgreennatureresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", puttalamcost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*puttalamavgcost;
            o=memberchild*(puttalamavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(puttalamcost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Royal_Green_Garden_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*royalgreengardenhoteladult;
            y=(memberchild*royalgreengardenhoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", puttalamcost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*puttalamavgcost;
            o=memberchild*(puttalamavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(puttalamcost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Cloud_Nine") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*cloudnineadult;
            y=(memberchild*cloudnineadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", puttalamcost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*puttalamavgcost;
            o=memberchild*(puttalamavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(puttalamcost*days)+(otherex);
            printf("%d",k);


            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Ratnapura") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Ratnapura:\n"
            "01. Rikili Ella\n"
            "02. Thulhiriya Lake\n"
            "03. Nangalla Rock Hill\n"
            "04. Asupini Ella\n"
            "05. Dothaloya Waterfall\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Rikili_Ella") == 0) {
        printf(
            "\n About: Rikili Ella is situated in Bulathkohupitiya in the Kegalle district. This beautiful waterfall has a height of 30 m and is also known as �Rikilla Ella�. The source of the waterfall is the stream flowing from the northern part of the Hunusahaldeniya mountain range. Rikili Ella ends up flowing in to the Kelani River via Ritigaha.\n"
            "\nColombo to Destination Distance:79.8km\n"
            "\nAverage Travel Time From Colombo:2h 25min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", rikiliellaprice);
        }
        else if (strcmp(place, "Thulhiriya_Lake") == 0) {
                printf(
            "\n About: This is a man made lake surrounded by beautiful jungle. You are not allowed to fishing or consuming liquor here... But if you wanna have a naturan jungle experience in cool climate this is the place. \n"
            "\nColombo to Destination Distance:62.7km\n"
            "\nAverage Travel Time From Colombo:1h 50min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", thulhiriyalakeprice);
        }
        else if (strcmp(place, "Nangalla_Rock_Hill") == 0) {
                printf(
            "\n About: A huge rock is spread along a certain area. A beautiful view of sunrise and sunset.  Too hot in day times.\n"
            "\nColombo to Destination Distance:60.4km\n"
            "\nAverage Travel Time From Colombo:1h 45min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", naangallarockhillprice);
        }
        else if (strcmp(place, "Asupini_Ella") == 0) {
                printf(
            "\n About:Asupini Ella, also sometimes referred to as Ahupini Ella, is a waterfall which is located at Ganga Ihala Koralaya, Rakshawa in Aranayaka, Kegalle of Sabaragamuwa Province. The waterfall was named after a popular ancient fairytale story. \n"
            "\nColombo to Destination Distance:108km\n"
            "\nAverage Travel Time From Colombo:3h 7min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", asupiniellaprice);
        }
        else if (strcmp(place, "Dothaloya_Waterfall") == 0) {
                printf(
            "\n About: Dothal Oya is one of the places in Gurugoda Oya. The water here joins the Kelani River and flows into the Sea. \n"
            "\nColombo to Destination Distance:100km\n"
            "\nAverage Travel Time From Colombo:3h 5min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", dothaloyawaterfallprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Ratnapura District & Prices Of them--\n");
        printf("01. White House Holiday Resort-- LKR. ");
        printf("%d",  whitehouseholidayadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", whitehouseholidayadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Summer Ridge-- LKR. ");
        printf("%d", summerridgeadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", summerridgeadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Terrace Cinnamon View-- LKR. ");
        printf("%d", terracecinnamonviewadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", terracecinnamonviewadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "White_House_Holiday_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*whitehouseholidayadult;
            y=(memberchild*whitehouseholidayadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", ratnapuracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*ratnapuraavgcost;
            o=memberchild*(ratnapuraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(ratnapuracost*days)+(otherex);
            printf("%d",k);


            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Summer_Ridge") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*summerridgeadult;
            y=(memberchild*summerridgeadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", ratnapuracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*ratnapuraavgcost;
            o=memberchild*(ratnapuraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(ratnapuracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Terrace_Cinnamon_View") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*terracecinnamonviewadult;
            y=(memberchild*terracecinnamonviewadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", ratnapuracost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*ratnapuraavgcost;
            o=memberchild*(ratnapuraavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(ratnapuracost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }

    else if (strcmp(district, "Trincomalee") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Trincomalee:\n"
            "01. Fort Frederick\n"
            "02. Public Beach\n"
            "03. Swami Rock Dive Site\n"
            "04. Green Bay Beach\n"
            "05. Sri Badrakali Amman Hindu Kovil\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Fort_Frederick") == 0) {
        printf(
            "\n About: Fort Fredrick, also known as Trincomalee Fort or Fort of Triquillimale, is a fort built by Portuguese colonials at Trincomalee, Eastern Province, Sri Lanka, completed in 1624 CE, built on Swami Rock-Konamamalai from the debris of the world famous ancient Hindu Koneswaram temple.\n"
            "\nColombo to Destination Distance:259km\n"
            "\nAverage Travel Time From Colombo:5h 48min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", fortfrederickprice);
        }
        else if (strcmp(place, "Public_Beach") == 0) {
                printf(
            "\n About: One of the iconic places in Trincomalee. A large beautiful Sea view with white and clean sand area. Best place to spend your leisure time or get relaxed. Famous for boat ride, dolphin watching, snorkeling, and some other water sports.\n"
            "\nColombo to Destination Distance:258km\n"
            "\nAverage Travel Time From Colombo:5h 48min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", publicbeachtrincomaleeprice);
        }
        else if (strcmp(place, "Swami_Rock_Dive_Site") == 0) {
                printf(
            "\n About: It's one of the most interesting and popular dive sites around�from the statues of the hindu gods (Shiva, Cali, Ganesh �) to big schools of fishes, turtles, stone fish and an incredible variety of eels!!!.\n"
            "\nColombo to Destination Distance:259km\n"
            "\nAverage Travel Time From Colombo:5h 50min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", swamirockdivesiteprice);
        }
        else if (strcmp(place, "Green_Bay_Beach") == 0) {
                printf(
            "\n About: Green Bay Beech is a natural beach which is absoulitly a heavn. The natural beauty of the place remains same as it is not open for general public. The water on the sea looks green since the beach is covered by jungle. But water is crystal clear and clean\n"
            "\nColombo to Destination Distance:261km\n"
            "\nAverage Travel Time From Colombo:5h 53min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", greenbaybeachprice);
        }
        else if (strcmp(place, "Sri_Badrakali_Amman_Hindu_Kovil") == 0) {
                printf(
            "\n About:  Pathirakali Amman Temple � Pathirakali Ambal Kovil � or the Kali Kovil, Trincomalee is a Hindu temple dedicated to the goddess Bhadrakali, a form of the goddess Kali Amman in Trincomalee, Eastern Province, Sri Lanka. \n"
            "\nColombo to Destination Distance:258km\n"
            "\nAverage Travel Time From Colombo:5h 45min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", sribadrakaliammanhindukovilprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }







        printf("\n--These are the Hotels around the Trincomalee District & Prices Of them--\n");
        printf("01. Elegant Green Beach Resort-- LKR. ");
        printf("%d", elegantgreenbeachresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", elegantgreenbeachresortadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02. Mrd Beach Hotel-- LKR. ");
        printf("%d", mrdbeachhoteladult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", mrdbeachhoteladult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Blue Sand Beach Resort-- LKR. ");
        printf("%d", bluesandbeachresortadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", bluesandbeachresortadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Elegant_Green_Beach_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*elegantgreenbeachresortadult;
            y=(memberchild*elegantgreenbeachresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", trincomaleecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*trincomaleeavgcost;
            o=memberchild*(trincomaleeavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(trincomaleecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Mrd_Beach_Hotel") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*mrdbeachhoteladult;
            y=(memberchild*mrdbeachhoteladult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", trincomaleecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*trincomaleeavgcost;
            o=memberchild*(trincomaleeavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(trincomaleecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Blue_Sand_Beach_Resort") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*bluesandbeachresortadult;
            y=(memberchild*bluesandbeachresortadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", trincomaleecost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*trincomaleeavgcost;
            o=memberchild*(trincomaleeavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(trincomaleecost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else if (strcmp(district, "Vavuniya") == 0) {
        printf(
            "\nGreat Choice!\n"
            "You Can Visit These Places in Vavuniya:\n"
            "01. Vavuniya Park\n"
            "02. Sri Dalada Viharaya-Madukanda\n"
            "03. Avusatha Pitiya Bridge\n"
            "04. Kalvari Church\n"
            "05. Alagalla Dam\n"
        );
        printf("\nEnter the Place Name (NOTE:Use Underscore as space): ");
        scanf("%s", &place);

        if (strcmp(place, "Vavuniya_Park") == 0) {
        printf(
            "\n About: This is the old park in front of Vavuniya library recently renovated and modified. A good place for to children relax. Located within the Vavuniya town area.\n"
            "\nColombo to Destination Distance:247km\n"
            "\nAverage Travel Time From Colombo:5h 24min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", vavuniyaparkprice);
        }
        else if (strcmp(place, "Sri_Dalada_Viharaya-Madukanda") == 0) {
                printf(
            "\n About:a.Madukanda Sri Dalada Viharaya is the principal Dalada Maligaya. The sacred tooth relic of Lord Buddha was housed after it was carried into Sri Lanka by Hemamala and Dantha from India. The famous Thonigala inscription is close to the temple as well.The structure of the temple has inaugurated in the era of King Dutugemunu's General Nandimitra. This Vihara has water-cooled fabricating. There are remains of the stone columns of an old structure and the steps commencing to it, which have a fence and guard stone. Inside the image house, a ruined statue of a Buddha can be seen, and there is another exciting structure made of rectangular stone slabs thought to be a lavatory. \n"
            "\nColombo to Destination Distance:250km\n"
            "\nAverage Travel Time From Colombo:5h 29min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", sridaladaviharayamadukandaprice);
        }
        else if (strcmp(place, "Avusatha_Pitiya_Bridge") == 0) {
                printf(
            "\n About: Avusatha pitiya bridge is a Tourist attraction located in Vavuniya. It is one of the 1198 Tourist attractions in Sri Lanka. Address of Avusatha pitiya bridge is Unnamed Road, Vavuniya, Sri Lanka. Avusatha pitiya bridge is located in a remote area, with less than 1 listed places around it.\n"
            "\nColombo to Destination Distance:244km\n"
            "\nAverage Travel Time From Colombo:5h 20min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", avusathapitiyabridgeprice);
        }
        else if (strcmp(place, "Kalvari_Church") == 0) {
                printf(
            "\n About:  The Kalvari Church in Vavuniya is a significant religious landmark located in the Komarasankulam area of the Vavuniya District in Sri Lanka�s Northern Province. \n"
            "\nColombo to Destination Distance:246km\n"
            "\nAverage Travel Time From Colombo:5h 24min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", kalvarichurchprice);
        }
        else if (strcmp(place, "Alagalla_Dam") == 0) {
                printf(
            "\n About:  The Alagalla Mountain Range is situated at the boundary between the Central Province and the Sabaragamuwa Province in Sri Lanka. It's a popular hiking destination among local travelers, and on Independence Day, a large number of hikers cross this mountain. If you�re up for trekking, camping, or bird watching, Alagalla is a great choice. \n"
            "\nColombo to Destination Distance:243km\n"
            "\nAverage Travel Time From Colombo:5h 24min ( Without Expressway )\n"
            );
                printf("\nYour Travel Cost is:");
                printf("LKR. ");
                printf("%d", alagalladamprice);
        }
        else {
            printf("\nInvalid place name. Please check the spelling and try again. \n");
        }


        printf("\n--These are the Hotels around the Vavuniya District & Prices Of them--\n");
        printf("01. Birunthavanam-- LKR. ");
        printf("%d", birunthavanamadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", birunthavanamadult/2);
        printf(" (For one Child , For one Night.)\n");


        printf("02.Hotel Northway-- LKR. ");
        printf("%d",hotelnorthwayadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hotelnorthwayadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("03. Hotel Oviya-- LKR. ");
        printf("%d",hoteloviyaadult);
        printf(" (For one Adult , For one Night.)");
        printf("and LKR. ");
        printf("%d", hoteloviyaadult/2);
        printf(" (For one Child , For one Night.)\n");

        printf("\nEnter the Hotel Name (NOTE:Use Underscore as space): ");
        scanf("%s", &hotels);
        if (strcmp(hotels, "Birunthavanam") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*birunthavanamadult;
            y=(memberchild*birunthavanamadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", vavuniyacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*vavuniyaavgcost;
            o=memberchild*(vavuniyaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(vavuniyacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hotel_Northway") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hotelnorthwayadult;
            y=(memberchild*hotelnorthwayadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", vavuniyacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*vavuniyaavgcost;
            o=memberchild*(vavuniyaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(vavuniyacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else if (strcmp(hotels, "Hotel_Oviya") == 0) {
            printf("\nHow Many days you would like to stay in this Hotel ( Please Enter Only in Numbers ):");
            scanf("%d", &days);

            printf("\nEnter Your Other Expenses Cost: LKR.");
            scanf("%d",&otherex);

            printf("\n--Total Detail Bill--\n");

            printf("\nCustomer Name: ");
            printf("%s", fname);
            printf(" ");
            printf("%s", lname);

            printf("\nCustomer Contact Number: ");
            printf("%d", contactn);

            printf("\nCustomer Email: ");
            printf("%s", contacte);

            x=memberadult*hoteloviyaadult;
            y=(memberchild*hoteloviyaadult)/2;

            a=x*days;
            b=y*days;

            printf("\nCustomer Hotel Cost:LKR. ");
            printf("%d",a+b);

            printf("\nCustomer Food & Beverage Cost:LKR. ");
            printf("%d", vavuniyacost*days);

            printf("\nCustomer's Other Expenses Cost:LKR. ");
            printf("%d", otherex);

            printf("\nCustomer Average Travel Cost:LKR. ");

            p=memberadult*vavuniyaavgcost;
            o=memberchild*(vavuniyaavgcost)/2;
            printf("%d\n", o+p);

            printf("\nCustomer Total Cost:LKR. ");
            k=(o+p)+(a+b)+(vavuniyacost*days)+(otherex);
            printf("%d",k);

            z=k*10/100;
            ourbudget=k-z;
            printf("\nOur Budget:LKR. ");
            printf("%d", ourbudget);
            printf("\n");

            printf("\nCall For More Details: +94 77 2296277(Sandaruwan)\n");
            printf("                       +94 78 6360508(Maleesha)\n");
            printf("                       +94 71 9336890(Prabhani)\n");
            printf("                       +94 76 2732827(Chanula)\n");
            printf("                       +94 70 1690338(Indumini)\n");
            printf("\n--Visit Sri Lanka Again--\n");
            printf("\n--Thank You!--\n");
        }

        else {
            printf("\nInvalid Option.Please Enter Given Hotels\n");
        }
    }
    else {
        printf("\nDistrict Not Recognized. Please Try Again.\n");
    }
    return 0;
}
