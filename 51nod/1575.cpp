#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
typedef unsigned int u_int;
const int N=32000,seg=1000000;
u_int a[1001]={0,
    1733444640,2576248712,351758888,2215777656,121413720,
    3519376632,2139985264,1111633088,3292617168,608979136,
    2924735256,2042981296,261047536,2269948120,4028080336,
    465914344,2339218544,2687219856,1616692680,2315314352,
    3561951864,584500376,1352025768,3351813032,1146073704,
    1920764456,794633376,2537923264,3934379856,1561357000,
    3907639168,799659536,2387497880,3573752200,2931138776,
    465132128,1406210160,2949245768,1353194608,2060692224,
    1855832448,1284244192,2243821024,111884544,1242286968,
    1339123992,2702314816,842262896,1178205008,2980520792,
    3642879744,2013553816,1888925888,1758177272,2438355152,
    2229984608,134367640,2371156568,353082712,157480472,
    2114478064,405276944,678928152,1552552000,1491558744,
    4198957888,719720312,174548272,115888288,565802704,
    784039152,3116537392,2014586120,3377698456,3481145896,
    3394629944,2731755568,525398672,213211600,1718530352,
    6017248,2571164840,2353907456,4222954424,2363291248,
    618245688,3956442536,1150585960,3400400856,492140528,
    594647840,1595246872,3305138184,2405115944,1813149520,
    686647112,943195072,3165918920,296345040,452350600,
    650433624,325270584,2877170440,254351112,3510014448,
    539579688,1556193768,1181266584,1397180696,1876698552,
    893266392,777052160,4014321288,672449872,2162925176,
    1523897712,282250960,2964679168,3673060912,1092491176,
    3444924256,3134111400,1646238448,1341937520,2389175704,
    1607550312,2317564832,4212685496,1402546264,1990767320,
    87942344,2854727992,3629450320,3282334248,2121093016,
    4193138696,3292596384,4289102288,3114520224,3924061456,
    208185256,398541496,3490597280,3618713352,2149720304,
    3715421600,2118018808,1654742824,252745232,10442088,
    523136600,3317344712,1564795520,600678000,1160557504,
    1544840912,1512974376,2921222248,326322616,1910266960,
    1888066472,2723365744,4004728208,2383288280,2830919864,
    1866886248,3231232024,1602091696,375989824,1025614672,
    1220026240,1188393184,4032071224,1494909360,3999792168,
    1186066168,1671377536,2440404064,705566584,2043852296,
    3531879472,1124970376,2412328136,1921551296,1949184600,
    1204051680,841081752,2243065824,2580295328,618645960,
    2082443400,3979283816,1266866896,372461976,2229326000,
    233085712,3229157168,756425680,4175896272,690152288,
    3066583280,3355107768,3204240056,2523489920,2849336168,
    1921411744,1183310840,165991696,1355013776,4293554792,
    3474129760,1363914088,2548729072,1173132032,2842212768,
    4018745024,4011463688,845813304,2502373856,1391100736,
    2232262352,2361133536,2038100008,4138153688,3541200688,
    385471296,921743632,3974613856,2453741680,4210683912,
    308737120,2629558584,3238263376,443239848,2311044736,
    1736854680,1757289968,3051971632,1169419096,1015307048,
    176428016,4199297176,2792479144,1635461288,3641849872,
    1366418968,1256291320,2188754280,228342424,3218627072,
    1210591208,1739284288,1234914080,973766576,70130176,
    1846496104,405156520,1257822296,165535880,2903038144,
    1969760672,1642617144,262073232,2507327400,3939173488,
    2874806328,1577439592,2562252992,2859188992,3618702264,
    1584177248,3121308176,2534314320,1908927696,1225338712,
    1154561992,3205173104,1397621168,3154163392,3900989192,
    3878129824,2744495008,112500504,3152727272,3463582664,
    2357886560,2783949296,712514152,1850600896,4117955568,
    1962393080,2097047288,3027949896,3130566864,856049584,
    3935026296,1119843512,4216923032,71293384,2823058520,
    2468503248,258368392,1285438216,1096623048,921293064,
    3863328904,2657021928,386620056,1031900456,1218198376,
    2738144992,2574488376,3518974160,330877616,2869964384,
    102161776,225958080,276076448,526196904,1777862512,
    526644312,3326585336,3126842616,3877104848,2367263424,
    341065192,4282492872,3495295488,725754000,3653934264,
    2358265304,1679907344,700262280,3848836064,3235345088,
    4129669552,3806033616,770095960,2916336816,2133665232,
    980350600,3119646592,3817942784,154842680,2434744440,
    3920369832,1832811680,1222418720,3857283208,2488141216,
    3058229288,2873031056,2318836368,3151957512,155186816,
    989335184,250177296,3411849520,897632576,2006965184,
    3319609416,2513413416,1722511272,1778106032,2847128176,
    790498920,3181019432,352774744,926052280,511931688,
    249655144,540768872,2842181128,2001750048,680071776,
    1363143136,2873461576,824224328,3278502576,3450346400,
    1219683320,3477731400,2672072856,438130552,2017729592,
    4074072048,215097368,1974164984,1894430936,4119779920,
    3016094048,632701296,890322952,1899055624,2796870088,
    891433480,2303848200,2154349544,2325857576,3654823360,
    1589923776,4277358504,2128097384,1668774760,2602224688,
    2445788664,125577144,332277576,4018032168,3467247536,
    3564345584,3236152824,1811516320,3147660912,1779127968,
    1117683872,3630032224,3820566992,577904424,618205760,
    3697833864,2059132688,766830992,4103710064,2952131320,
    3485202024,25605024,2935152256,2573764304,3093547424,
    1604474312,1661910168,3837027840,4233281824,4097777144,
    1686212352,4042603240,1202623864,2325927184,1872358664,
    1651069584,4151522832,564207264,3919097528,1769974816,
    921315624,1429369856,1850036608,3412049088,368827000,
    2103121760,513301296,1663645584,2035868432,120767640,
    680069400,3830490520,2381490544,912133832,936417640,
    1940705096,3399712008,2835228192,1451316024,4262741656,
    4149711280,429616064,1054007288,2200211952,2488379096,
    438462144,3900947856,968632768,3312980960,1542563072,
    4209841504,577363496,2636644272,2880159080,3303937440,
    1988458312,3550057016,1565620880,3839793224,1786560064,
    3757548944,3672840976,4093160408,254481984,4160685304,
    3064993912,2341736408,3880797104,728802424,1809093080,
    2361127368,1922626472,3597025240,4049035032,851614128,
    634632128,2388861520,1610234680,3972791864,2869610744,
    3424145936,3583294080,3178324736,2332666512,2986068304,
    3928583296,2744056208,2892086240,3315211576,3288744408,
    2676230520,2127444872,1316272760,1294476000,2110639312,
    3091568,4030435528,87999448,686167944,2820538256,
    2760926144,486636416,4148329904,572248768,3588276168,
    4061437184,1151050496,657523016,3922156184,1435172968,
    949941736,1981132848,3254480808,598661336,332398864,
    1715141504,2807161448,250164416,3945074584,1396339984,
    1813442792,3009290832,892060952,2602191248,2427201216,
    3135623856,1827008776,1641445888,347509904,1032165536,
    3835584640,978130288,2704377928,1291007048,2018170392,
    852314512,1704214856,2017088856,2106333696,3333832760,
    4247157928,3767787816,2317070840,1728912336,1811544744,
    3609972712,4083807008,2001155320,1212405792,2563960928,
    4213727920,2753546712,564152224,2699029488,3913175024,
    519980576,1986349640,3379576520,413103464,1974399408,
    1274500232,1871612408,1775371536,1933617944,2624825976,
    189373552,2024569560,3042754272,3771010664,22212456,
    1969991496,4192336280,1127434464,819715392,1429839544,
    2046325504,444582512,2708606624,2996162552,1273713712,
    2108809456,3113470656,2241259232,3642680040,3310697152,
    2721982096,3711373928,3783549952,3300645816,1866419464,
    1175230352,4261405824,1040498664,207659824,3669270496,
    2097978792,3805569808,1674351112,1435599696,895996712,
    4147548656,3758453032,3434855432,3997129536,2250156488,
    3777164144,3835254016,3796472128,1305655448,4216504112,
    2411468400,3143019064,2590976888,1796770144,849739952,
    1014211296,3113689808,2194480304,2390537800,2688178608,
    1528779152,663553816,3642037296,1907235880,3489197832,
    4154427016,3795184472,2122148696,747509400,263388808,
    2324367760,500362240,473865352,3361915296,1319900504,
    1181866544,2175934424,1163077712,3076502184,942745304,
    1301531432,1758346880,262680776,1986594880,562385392,
    3182071728,946962192,391690904,850259888,153264888,
    131420656,3088749488,302271888,2396877872,3398536848,
    1406343768,2024426928,3791155288,1218699064,2172006464,
    3454386576,3696494384,2781438120,4048628664,4139761864,
    1497306960,744801688,892691696,3011371288,917857520,
    415837672,3888300328,2732335224,1453971000,1304804968,
    1987059688,3681784360,3874335624,3968101288,2312395192,
    3232338104,3219475272,3758490624,2435229208,3874508640,
    3318480648,1107446984,379582160,1455738984,3626786880,
    1466967920,2182201552,3644942968,227395144,2798958072,
    1571296264,2787405032,3210424368,3393518824,3723417432,
    3574020152,35184960,1987386752,1132543712,2915045128,
    3067337520,3012918472,2290885040,1090904104,447238232,
    3633515040,1271342880,3961651624,2934765232,480985264,
    3286124728,1794759776,1623878624,2282177720,1967532024,
    301372400,1345473792,3755548200,2006971856,3975403440,
    1928753928,2711410104,1671619920,2446850504,2966897696,
    3949342224,81112312,4177901040,3946236408,3767680024,
    3982138696,4238137808,805048960,2085857440,758945184,
    118109304,2948132768,417468872,1890729544,1262322632,
    4009356800,1738290096,681921040,923769360,2872451976,
    3629571096,3157735816,3855579080,4188326600,4064175920,
    44113672,2235119968,2739974264,2847029296,1403176152,
    2061789920,3783283976,204843872,3209248256,3002259360,
    1529643768,2459041760,1737588304,260221880,4195225800,
    334681176,842708128,1292550416,74917720,661187032,
    3678058392,1868847232,4220039624,3385364632,3264009136,
    2590033736,295667288,1000703528,4161694784,3095034464,
    939923896,3658093640,4001828184,2359847232,1600567360,
    2862397520,370193856,47275160,146318656,1857948128,
    3078074536,3230058144,1385444312,2479983768,2688113432,
    2519573832,2072508736,2579916056,4066579808,140670968,
    3344927096,2577742152,3512010392,2351531168,3878761488,
    2175239392,2662715816,39854376,2711114872,2631465952,
    97405568,3262006984,1770364368,3942017312,2076472168,
    364317416,2275804352,2326509872,3465428592,1633768136,
    4271275048,1583438744,3313963128,2555708536,301933928,
    3221882080,3318308568,2852470552,2077067288,975940592,
    3135464904,1551545272,654142240,1558748776,540734384,
    828089712,3213874296,2994691448,1068176600,2805106368,
    4194905752,99461712,4242516440,1405672552,2968515888,
    1034571464,3556919296,1331052936,2623270232,1807977352,
    2712135336,2051872576,3231574080,2232085704,1126533760,
    1060343592,1897868248,3521896216,1177637904,2762119632,
    2501595624,3650669760,2678230016,1267453736,2914132768,
    3885235936,3560505464,2702192848,4242702168,1653346472,
    4179404384,1703048728,2644989016,786614752,156249872,
    158213392,1983253848,2972718664,2690417264,3709331200,
    3647734824,1443199944,963464080,2334180688,670146504,
    2302510392,3102876496,2272602832,2155104120,1424775080,
    3232616112,1612096152,548413232,775112704,2767854392,
    1926012992,3962099704,1534833104,1437394848,3937110424,
    3275277504,3975615920,1804226856,115164832,2465055040,
    4284022832,349871304,1150349264,689599304,1583994112,
    1204065576,3509329904,1755371320,2400372832,3754488072,
    3408640680,2246623024,1303023128,4133510848,328160296,
    2665841472,700839824,101744680,1214951928,1554372656,
    443323056,1197961176,1382255472,1754674048,33203632,
    439959624,1923743952,3712163776,1721999952,763538720,
    2191038536,122692032,2639116552,2167626232,644962664,
    1345072992,1380657064,935890688,2324296120,2213636320,
    3678782728,2138778216,868374816,727456568,3515723032,
    2465365000,2486698024,3493737088,2537484872,468837512,
    356319296,2320039048,3080663784,2319173592,753897240,
    2366859232,1498073016,494407456,2741682680,1458530264,
    1821870168,3973984984,898571752,888494984,1108811544
};

u_int power(u_int a,u_int n){
    u_int r=1;
    while(n){
        if(n%2) r*=a;
        a*=a;n>>=1;
    }
    return r;
}

u_int prime[N+1],f[seg],g[seg];

u_int calc(u_int l,u_int r){
    for(u_int i=0;i<r-l+1;i++){
        f[i]=1;g[i]=i+l;
    }
    for(u_int i=1;i<=prime[0];i++){
        for(u_int j=((l-1)/prime[i]+1)*prime[i];j<=r;j+=prime[i]){
            u_int k=0;
            while(g[j-l]%prime[i]==0) g[j-l]/=prime[i],k++;
            f[j-l]*=(2*k+1)*(prime[i]-1)*power(prime[i],2*k-1)
                +power(prime[i],k-1);
        }
    }
    u_int ret=0;
    for(u_int i=l;i<=r;i++){
        if(g[i-l]>1) f[i-l]*=3*(g[i-l]*g[i-l]-g[i-l])+1;
        ret+=f[i-l];
    }
    return ret;
}

int main(){
    for(u_int i=2;i<=N;i++){
        if(!prime[i]) prime[++prime[0]]=i;
        for(u_int j=1;j<=prime[0]&&i<=N/prime[j];j++){
            prime[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    int T;
    cin>>T;
    while(T--){
        u_int n;
        cin>>n;
        u_int ans=a[n/seg]+calc(n/seg*seg+1,n);
        cout<<ans<<endl;
    }
    return 0;
}