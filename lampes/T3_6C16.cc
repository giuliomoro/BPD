/* ------------------------------------------------------------
name: "T3_6C16"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -scal -ftz 0
------------------------------------------------------------ */

#ifndef  __T3_6C16_H__
#define  __T3_6C16_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>

static float fT3_6C16SIG0Wave0[2001] = {214.80658f,214.650589f,214.494446f,214.33815f,214.181702f,214.025101f,213.868347f,213.711456f,213.554398f,213.397217f,213.239868f,213.082382f,212.924759f,212.766983f,212.60907f,212.451004f,212.292801f,212.13446f,211.975967f,211.817337f,211.658569f,211.499664f,211.340622f,211.181442f,211.022125f,210.862671f,210.703079f,210.54335f,210.383484f,210.223495f,210.063354f,209.903091f,209.742706f,209.582169f,209.421524f,209.260727f,209.099808f,208.938766f,208.777588f,208.616287f,208.454849f,208.293289f,208.131607f,207.969788f,207.807861f,207.645798f,207.483612f,207.321289f,207.158859f,206.996307f,206.833633f,206.670822f,206.507904f,206.344864f,206.181702f,206.018417f,205.855011f,205.691498f,205.527863f,205.364105f,205.200226f,205.03624f,204.872131f,204.707916f,204.543579f,204.37912f,204.214554f,204.049881f,203.885086f,203.720184f,203.555161f,203.39003f,203.224792f,203.059433f,202.893982f,202.728409f,202.562714f,202.396927f,202.231018f,202.065018f,201.898895f,201.732666f,201.566345f,201.399902f,201.233353f,201.066696f,200.899948f,200.733078f,200.566116f,200.399048f,200.231873f,200.06459f,199.897202f,199.729721f,199.562134f,199.39444f,199.226654f,199.058762f,198.890778f,198.722672f,198.554489f,198.3862f,198.217804f,198.049316f,197.880722f,197.712036f,197.543243f,197.374359f,197.205383f,197.036316f,196.867142f,196.697861f,196.528503f,196.359039f,196.189484f,196.019836f,195.850098f,195.680252f,195.51033f,195.340302f,195.170181f,194.999969f,194.829666f,194.659271f,194.488785f,194.318207f,194.147537f,193.976776f,193.805923f,193.634979f,193.463959f,193.292831f,193.121628f,192.950333f,192.778946f,192.607468f,192.435898f,192.264252f,192.092514f,191.920685f,191.748779f,191.576782f,191.404694f,191.232529f,191.060272f,190.887924f,190.7155f,190.542984f,190.370392f,190.197708f,190.024948f,189.852097f,189.679169f,189.506149f,189.333054f,189.159866f,188.986603f,188.813263f,188.639832f,188.466324f,188.29274f,188.119064f,187.945312f,187.771484f,187.59758f,187.423584f,187.249512f,187.075363f,186.901123f,186.726822f,186.552429f,186.37796f,186.203415f,186.028793f,185.854095f,185.679306f,185.504456f,185.329529f,185.15451f,184.979431f,184.80426f,184.629028f,184.453705f,184.27832f,184.102844f,183.927307f,183.751694f,183.576004f,183.400238f,183.224396f,183.048477f,182.872482f,182.696426f,182.520294f,182.34407f,182.167801f,181.99144f,181.815018f,181.638504f,181.461945f,181.285294f,181.108582f,180.931793f,180.754929f,180.578003f,180.401001f,180.223923f,180.046783f,179.869568f,179.692276f,179.514923f,179.337509f,179.160004f,178.982452f,178.80481f,178.627106f,178.449341f,178.2715f,178.093597f,177.915619f,177.737579f,177.559464f,177.381287f,177.203033f,177.024719f,176.846344f,176.667892f,176.48938f,176.310791f,176.132141f,175.95343f,175.774658f,175.59581f,175.416885f,175.237915f,175.058868f,174.879761f,174.700592f,174.521347f,174.342041f,174.162674f,173.983246f,173.803741f,173.624191f,173.444565f,173.264877f,173.085129f,172.905304f,172.725433f,172.545486f,172.365479f,172.18541f,172.00528f,171.825089f,171.644836f,171.464523f,171.284149f,171.103699f,170.923203f,170.74263f,170.562012f,170.381332f,170.200577f,170.019775f,169.838898f,169.657974f,169.476974f,169.295929f,169.114822f,168.933655f,168.752426f,168.571136f,168.389786f,168.208374f,168.026901f,167.845367f,167.663788f,167.482147f,167.300446f,167.118683f,166.936859f,166.754974f,166.573044f,166.391037f,166.208984f,166.026886f,165.844711f,165.662491f,165.480194f,165.297867f,165.115463f,164.933014f,164.750488f,164.567932f,164.3853f,164.202621f,164.019882f,163.837097f,163.654236f,163.471329f,163.288376f,163.105362f,162.922287f,162.739151f,162.555969f,162.372742f,162.189438f,162.006088f,161.822693f,161.639236f,161.455719f,161.272156f,161.088531f,160.904861f,160.72113f,160.537354f,160.353516f,160.169617f,159.985672f,159.801682f,159.61763f,159.433533f,159.249374f,159.065155f,158.88089f,158.696579f,158.512207f,158.327789f,158.143326f,157.958801f,157.774216f,157.589584f,157.404907f,157.220169f,157.035385f,156.850555f,156.665665f,156.480728f,156.295731f,156.110687f,155.925598f,155.740448f,155.555252f,155.37001f,155.184723f,154.999374f,154.81398f,154.628525f,154.443024f,154.257477f,154.071884f,153.88623f,153.700531f,153.514786f,153.328995f,153.143143f,152.957245f,152.771301f,152.585312f,152.399277f,152.213181f,152.027039f,151.840851f,151.654602f,151.468323f,151.281982f,151.095596f,150.909164f,150.722687f,150.536163f,150.349579f,150.162964f,149.976288f,149.789566f,149.602798f,149.415985f,149.229126f,149.042206f,148.855255f,148.668259f,148.481201f,148.294098f,148.106964f,147.919769f,147.732529f,147.545242f,147.35791f,147.170532f,146.983109f,146.795639f,146.608124f,146.420563f,146.232956f,146.045303f,145.857605f,145.669846f,145.482056f,145.29422f,145.106339f,144.918411f,144.730438f,144.542419f,144.35437f,144.16626f,143.978104f,143.789902f,143.601669f,143.413376f,143.225052f,143.036667f,142.848251f,142.65979f,142.471283f,142.28273f,142.094131f,141.905487f,141.716812f,141.528076f,141.33931f,141.150497f,140.961639f,140.772736f,140.583786f,140.394806f,140.205765f,140.016693f,139.827576f,139.638412f,139.449219f,139.259964f,139.070679f,138.881348f,138.691971f,138.502548f,138.313095f,138.123596f,137.934052f,137.744461f,137.55484f,137.365173f,137.175461f,136.985703f,136.795914f,136.606079f,136.416199f,136.226273f,136.036316f,135.846313f,135.656281f,135.466187f,135.276062f,135.085907f,134.895691f,134.705444f,134.515152f,134.324829f,134.13446f,133.944046f,133.753601f,133.56311f,133.372574f,133.182007f,132.991394f,132.800735f,132.610046f,132.419312f,132.228546f,132.037735f,131.846878f,131.655991f,131.465057f,131.274094f,131.083084f,130.892029f,130.700943f,130.509811f,130.318649f,130.127441f,129.936203f,129.744919f,129.553604f,129.362244f,129.170837f,128.979401f,128.787933f,128.59642f,128.404861f,128.213272f,128.021652f,127.829979f,127.638275f,127.446533f,127.254753f,127.062935f,126.871078f,126.679184f,126.487251f,126.29528f,126.103279f,125.911232f,125.719154f,125.527031f,125.334877f,125.142685f,124.950455f,124.758186f,124.565887f,124.37355f,124.181168f,123.988754f,123.79631f,123.603821f,123.411301f,123.218742f,123.026146f,122.833511f,122.640846f,122.448143f,122.255402f,122.06263f,121.86982f,121.676971f,121.484085f,121.291168f,121.098213f,120.905228f,120.712204f,120.519142f,120.32605f,120.132919f,119.939751f,119.746552f,119.553314f,119.360046f,119.16674f,118.973404f,118.780029f,118.586617f,118.393181f,118.199699f,118.006187f,117.812645f,117.619064f,117.425446f,117.231796f,117.038116f,116.844398f,116.65065f,116.456863f,116.263046f,116.069199f,115.875313f,115.681396f,115.487442f,115.293457f,115.099442f,114.905388f,114.711304f,114.517189f,114.323036f,114.128853f,113.934639f,113.740395f,113.546112f,113.351799f,113.157448f,112.963074f,112.768661f,112.574219f,112.379745f,112.185242f,111.9907f,111.796127f,111.601524f,111.406891f,111.212227f,111.017525f,110.8228f,110.628036f,110.43325f,110.238426f,110.043571f,109.848686f,109.65377f,109.458817f,109.26384f,109.068832f,108.873795f,108.678726f,108.48362f,108.28849f,108.09333f,107.89814f,107.702911f,107.50766f,107.312378f,107.117065f,106.921722f,106.726357f,106.530952f,106.335518f,106.14006f,105.944572f,105.749054f,105.553505f,105.357925f,105.162315f,104.966682f,104.771019f,104.575325f,104.379601f,104.183853f,103.988068f,103.792259f,103.596428f,103.400558f,103.204666f,103.008751f,102.812798f,102.616821f,102.420815f,102.224785f,102.028725f,101.832642f,101.636528f,101.440384f,101.244217f,101.048019f,100.851791f,100.655548f,100.459267f,100.262962f,100.066635f,99.8702774f,99.6738968f,99.4774857f,99.2810516f,99.0845947f,98.8881073f,98.6915894f,98.4950562f,98.2984924f,98.1018982f,97.9052887f,97.7086487f,97.5119781f,97.3152924f,97.118576f,96.9218369f,96.7250748f,96.5282822f,96.3314743f,96.1346359f,95.9377747f,95.7408905f,95.5439758f,95.3470459f,95.1500931f,94.9531097f,94.7561035f,94.559082f,94.36203f,94.1649628f,93.967865f,93.770752f,93.5736084f,93.3764496f,93.1792679f,92.9820633f,92.7848358f,92.5875854f,92.3903122f,92.1930237f,91.9957123f,91.798378f,91.6010208f,91.4036484f,91.2062531f,91.0088425f,90.811409f,90.6139526f,90.416481f,90.2189865f,90.0214767f,89.8239441f,89.6263962f,89.4288254f,89.2312393f,89.033638f,88.8360138f,88.6383743f,88.4407196f,88.2430496f,88.0453568f,87.8476486f,87.6499252f,87.4521942f,87.2544403f,87.0566711f,86.8588867f,86.661087f,86.4632721f,86.2654419f,86.0676041f,85.869751f,85.6718826f,85.4740067f,85.2761154f,85.0782089f,84.8802948f,84.6823654f,84.4844284f,84.2864838f,84.0885239f,83.8905563f,83.6925812f,83.4945984f,83.296608f,83.0986099f,82.9006042f,82.7025909f,82.50457f,82.3065491f,82.1085205f,81.9104843f,81.7124481f,81.5144119f,81.3163681f,81.1183243f,80.9202805f,80.7222366f,80.5241928f,80.3261566f,80.1281128f,79.9300766f,79.7320404f,79.5340118f,79.3359909f,79.13797f,78.9399643f,78.7419586f,78.5439682f,78.3459854f,78.1480179f,77.950058f,77.7521133f,77.554184f,77.3562698f,77.1583786f,76.9605026f,76.7626419f,76.5648041f,76.3669891f,76.1692047f,75.9714355f,75.7737045f,75.5759964f,75.3783188f,75.1806793f,74.9830704f,74.7854919f,74.5879593f,74.3904648f,74.1930084f,73.9955978f,73.7982407f,73.6009216f,73.4036636f,73.2064514f,73.0093002f,72.8122101f,72.6151733f,72.4182053f,72.2213058f,72.0244751f,71.8277206f,71.6310349f,71.434433f,71.237915f,71.0414886f,70.8451462f,70.6488953f,70.4527512f,70.2566986f,70.0607605f,69.8649292f,69.6692123f,69.4736176f,69.2781448f,69.0828018f,68.8875885f,68.6925201f,68.4975967f,68.3028183f,68.1082001f,67.9137421f,67.7194519f,67.5253372f,67.331398f,67.1376495f,66.9440918f,66.7507401f,66.5575943f,66.3646622f,66.1719589f,65.9794769f,65.7872467f,65.595253f,65.4035187f,65.2120514f,65.0208588f,64.8299484f,64.639328f,64.4490128f,64.2590103f,64.0693359f,63.8799896f,63.6909866f,63.5023384f,63.3140602f,63.1261597f,62.9386444f,62.7515373f,62.5648384f,62.3785706f,62.1927376f,62.0073624f,61.8224487f,61.6380157f,61.4540749f,61.2706413f,61.0877266f,60.9053497f,60.7235184f,60.5422554f,60.3615685f,60.1814766f,60.0019951f,59.8231392f,59.6449203f,59.4673576f,59.2904663f,59.1142616f,58.9387589f,58.7639732f,58.5899239f,58.416626f,58.244091f,58.0723381f,57.9013824f,57.7312393f,57.5619278f,57.3934555f,57.2258453f,57.0591087f,56.893261f,56.7283173f,56.5642929f,56.4012032f,56.2390556f,56.0778694f,55.9176598f,55.7584343f,55.6002083f,55.442997f,55.2868042f,55.131649f,54.9775429f,54.8244896f,54.6725044f,54.521595f,54.371769f,54.2230377f,54.0754128f,53.928894f,53.783493f,53.6392136f,53.496067f,53.3540535f,53.2131805f,53.0734482f,52.9348679f,52.7974358f,52.6611595f,52.5260391f,52.3920746f,52.2592697f,52.1276207f,51.9971352f,51.8678055f,51.7396355f,51.6126175f,51.4867554f,51.3620453f,51.2384834f,51.116066f,50.9947891f,50.8746529f,50.7556458f,50.6377678f,50.5210114f,50.4053688f,50.2908401f,50.1774101f,50.0650826f,49.9538422f,49.8436852f,49.7346039f,49.6265869f,49.5196342f,49.4137268f,49.3088646f,49.2050362f,49.1022339f,49.0004463f,48.8996696f,48.7998848f,48.7010918f,48.6032753f,48.5064316f,48.4105453f,48.315609f,48.221611f,48.1285439f,48.0363998f,47.9451637f,47.8548279f,47.7653809f,47.676815f,47.589119f,47.502285f,47.4163017f,47.3311577f,47.2468452f,47.163353f,47.0806732f,46.9987946f,46.9177055f,46.8373985f,46.7578621f,46.6790924f,46.6010704f,46.5237961f,46.447258f,46.3714409f,46.2963409f,46.2219467f,46.1482544f,46.0752487f,46.0029221f,45.9312668f,45.8602753f,45.7899399f,45.7202454f,45.6511917f,45.5827675f,45.5149612f,45.447773f,45.3811836f,45.315197f,45.2497978f,45.1849785f,45.1207352f,45.0570564f,44.9939384f,44.9313698f,44.8693504f,44.8078651f,44.7469101f,44.6864815f,44.6265678f,44.5671654f,44.5082664f,44.4498672f,44.3919563f,44.3345299f,44.2775803f,44.2211037f,44.1650925f,44.1095428f,44.0544472f,43.9997978f,43.9455948f,43.8918266f,43.8384895f,43.7855759f,43.7330856f,43.6810112f,43.6293449f,43.5780869f,43.5272255f,43.4767609f,43.4266853f,43.3769951f,43.3276825f,43.2787476f,43.2301865f,43.1819878f,43.1341515f,43.0866737f,43.0395508f,42.992775f,42.9463425f,42.9002533f,42.8544998f,42.8090782f,42.7639847f,42.7192154f,42.6747665f,42.6306381f,42.5868187f,42.5433083f,42.5001068f,42.4572067f,42.4146042f,42.3722954f,42.3302803f,42.2885551f,42.2471123f,42.2059517f,42.1650734f,42.1244659f,42.0841331f,42.0440712f,42.0042725f,41.9647369f,41.9254608f,41.8864441f,41.847683f,41.8091736f,41.7709122f,41.7328949f,41.6951218f,41.6575928f,41.6202965f,41.5832405f,41.5464172f,41.5098228f,41.4734573f,41.4373169f,41.4013977f,41.3657036f,41.3302269f,41.2949638f,41.2599182f,41.2250824f,41.1904564f,41.1560364f,41.1218224f,41.0878143f,41.0540047f,41.0203934f,40.9869804f,40.9537621f,40.9207344f,40.8879013f,40.8552551f,40.8227959f,40.7905235f,40.7584343f,40.7265244f,40.6947975f,40.6632462f,40.6318741f,40.6006737f,40.5696487f,40.5387917f,40.5081062f,40.4775887f,40.4472389f,40.4170532f,40.3870277f,40.3571663f,40.3274651f,40.2979202f,40.2685356f,40.2393036f,40.210228f,40.1813049f,40.1525307f,40.123909f,40.0954361f,40.0671082f,40.038929f,40.010891f,39.9829979f,39.955246f,39.9276352f,39.9001656f,39.8728294f,39.8456345f,39.818573f,39.7916451f,39.7648544f,39.7381897f,39.7116623f,39.6852608f,39.658989f,39.632843f,39.6068268f,39.5809326f,39.5551643f,39.5295181f,39.5039978f,39.4785957f,39.4533119f,39.4281502f,39.4031067f,39.3781776f,39.3533669f,39.3286705f,39.3040886f,39.2796173f,39.2552605f,39.2310143f,39.2068787f,39.1828537f,39.1589394f,39.135128f,39.1114273f,39.0878296f,39.0643387f,39.0409508f,39.0176697f,38.9944878f,38.9714088f,38.9484329f,38.9255562f,38.9027748f,38.8800964f,38.8575172f,38.8350334f,38.812645f,38.7903519f,38.7681541f,38.7460518f,38.724041f,38.7021255f,38.6803017f,38.6585693f,38.6369247f,38.6153717f,38.5939102f,38.5725327f,38.5512466f,38.5300484f,38.508934f,38.4879074f,38.4669647f,38.4461098f,38.4253387f,38.4046478f,38.3840408f,38.3635178f,38.3430748f,38.3227158f,38.302433f,38.2822342f,38.2621117f,38.2420692f,38.2221069f,38.2022209f,38.1824112f,38.1626778f,38.1430206f,38.1234398f,38.1039352f,38.0845032f,38.0651436f,38.0458603f,38.0266495f,38.0075111f,37.9884453f,37.9694481f,37.9505234f,37.9316711f,37.9128876f,37.8941727f,37.8755264f,37.8569489f,37.8384399f,37.8199997f,37.8016281f,37.7833214f,37.7650795f,37.7469063f,37.7287941f,37.7107506f,37.6927719f,37.6748543f,37.6570053f,37.6392174f,37.6214905f,37.6038284f,37.5862274f,37.5686874f,37.5512085f,37.5337944f,37.5164375f,37.4991417f,37.4819031f,37.4647293f,37.4476089f,37.4305496f,37.4135513f,37.3966064f,37.3797226f,37.3628922f,37.3461227f,37.3294067f,37.312748f,37.2961464f,37.2795982f,37.2631035f,37.246666f,37.2302856f,37.2139549f,37.1976814f,37.1814575f,37.1652908f,37.1491737f,37.13311f,37.1170998f,37.1011391f,37.0852318f,37.0693741f,37.0535698f,37.0378151f,37.02211f,37.0064545f,36.9908524f,36.975296f,36.9597893f,36.9443321f,36.9289246f,36.9135628f,36.8982506f,36.882988f,36.8677711f,36.8526001f,36.8374786f,36.822403f,36.807373f,36.7923889f,36.7774544f,36.7625618f,36.747715f,36.732914f,36.7181549f,36.7034454f,36.6887779f,36.6741524f,36.6595764f,36.6450386f,36.6305466f,36.6160965f,36.6016922f,36.587326f,36.5730057f,36.5587273f,36.5444908f,36.5302963f,36.5161438f,36.5020294f,36.4879608f,36.4739304f,36.459938f,36.4459915f,36.4320793f,36.4182129f,36.4043846f,36.3905945f,36.3768425f,36.3631325f,36.3494606f,36.3358269f,36.3222313f,36.3086777f,36.2951584f,36.2816772f,36.2682343f,36.2548294f,36.2414627f,36.2281303f,36.2148399f,36.2015839f,36.1883621f,36.1751785f,36.1620331f,36.1489182f,36.1358452f,36.1228065f,36.1098022f,36.0968323f,36.0838966f,36.0709991f,36.058136f,36.0453072f,36.0325089f,36.0197487f,36.0070229f,35.9943314f,35.9816704f,35.9690475f,35.9564552f,35.9438972f,35.9313698f,35.9188805f,35.9064178f,35.8939934f,35.8815956f,35.869236f,35.8569069f,35.8446083f,35.8323402f,35.8201065f,35.8079033f,35.7957306f,35.7835922f,35.7714806f,35.7594032f,35.7473564f,35.7353401f,35.7233543f,35.7113991f,35.6994705f,35.6875763f,35.6757088f,35.6638756f,35.6520691f,35.6402931f,35.6285439f,35.6168251f,35.6051369f,35.5934753f,35.5818443f,35.5702438f,35.55867f,35.547123f,35.5356064f,35.5241203f,35.5126572f,35.5012245f,35.4898186f,35.4784431f,35.4670944f,35.4557724f,35.4444771f,35.4332085f,35.4219666f,35.4107552f,35.3995667f,35.3884048f,35.3772736f,35.3661652f,35.3550835f,35.3440285f,35.3330002f,35.3219986f,35.3110237f,35.3000717f,35.2891464f,35.2782478f,35.2673721f,35.2565231f,35.2457008f,35.2349014f,35.2241287f,35.2133827f,35.2026558f,35.1919594f,35.1812859f,35.1706352f,35.1600075f,35.1494064f,35.1388321f,35.1282768f,35.1177483f,35.1072426f,35.0967636f,35.0863037f,35.0758705f,35.0654602f,35.0550728f,35.0447083f,35.0343666f,35.0240479f,35.0137558f,35.0034828f,34.9932327f,34.9830055f,34.9728012f,34.9626198f,34.9524612f,34.9423256f,34.9322128f,34.9221191f,34.9120483f,34.9020004f,34.8919754f,34.8819695f,34.8719864f,34.8620262f,34.8520851f,34.8421669f,34.8322716f,34.8223953f,34.812542f,34.8027077f,34.7928925f,34.7831039f,34.7733307f,34.7635803f,34.7538528f,34.7441444f,34.7344551f,34.7247887f,34.7151413f,34.705513f,34.6959076f,34.6863213f,34.676754f,34.6672058f,34.6576805f,34.6481743f,34.6386871f,34.6292191f,34.6197701f,34.6103401f,34.6009331f,34.5915413f,34.5821724f,34.5728226f,34.563488f,34.5541763f,34.5448799f,34.5356064f,34.5263481f,34.5171127f,34.5078926f,34.4986916f,34.4895096f,34.4803467f,34.4712029f,34.4620781f,34.4529686f,34.4438782f,34.4348068f,34.4257507f,34.4167175f,34.4076996f,34.3987007f,34.3897171f,34.3807526f,34.3718071f,34.3628769f,34.3539658f,34.3450699f,34.3361931f,34.3273354f,34.3184929f,34.3096695f,34.3008614f,34.2920685f,34.2832985f,34.2745399f,34.2658005f,34.2570801f,34.2483711f,34.2396851f,34.2310104f,34.2223549f,34.2137146f,34.2050934f,34.1964874f,34.1878967f,34.1793213f,34.1707649f,34.1622238f,34.153698f,34.1451912f,34.1366997f,34.1282196f,34.1197586f,34.1113167f,34.1028862f,34.094471f,34.0860748f,34.0776939f,34.0693245f,34.0609741f,34.052639f,34.0443192f,34.0360146f,34.0277252f,34.0194511f,34.0111923f,34.0029488f,33.9947205f,33.9865074f,33.9783096f,33.9701233f,33.961956f,33.9538002f,33.9456635f,33.9375381f,33.9294281f,33.9213333f,33.9132538f,33.9051895f,33.8971367f,33.8890991f,33.8810768f,33.8730698f,33.865078f,33.8570976f,33.8491325f,33.8411827f,33.8332443f,33.8253212f,33.8174133f,33.8095207f,33.8016396f,33.7937698f,33.7859192f,33.77808f,33.7702522f,33.7624435f,33.7546463f,33.7468605f,33.73909f,33.7313309f,33.723587f,33.7158585f,33.7081413f,33.7004356f,33.692749f,33.68507f,33.6774063f,33.6697578f,33.662117f,33.6544952f,33.6468849f,33.639286f,33.6316986f,33.6241264f,33.6165695f,33.6090202f,33.60149f,33.5939674f,33.5864601f,33.5789642f,33.5714798f,33.5640106f,33.5565529f,33.5491066f,33.5416756f,33.534256f,33.5268478f,33.5194511f,33.5120697f,33.5046997f,33.4973412f,33.489994f,33.4826584f,33.475338f,33.468029f,33.4607315f,33.4534454f,33.4461708f,33.4389114f,33.4316597f,33.4244232f,33.4171944f,33.4099808f,33.4027786f,33.3955879f,33.3884087f,33.3812408f,33.3740883f,33.3669434f,33.3598099f,33.3526878f,33.3455811f,33.3384819f,33.3313942f,33.3243217f,33.3172569f,33.3102036f,33.3031616f,33.2961311f,33.2891159f,33.2821083f,33.2751122f,33.2681236f,33.2611504f,33.2541885f,33.2472343f,33.2402954f,33.2333641f,33.2264442f,33.2195358f,33.2126389f,33.2057533f,33.1988792f,33.1920128f,33.1851578f,33.1783142f,33.1714821f,33.1646614f,33.1578484f,33.1510468f,33.1442566f,33.1374779f,33.1307068f,33.1239471f,33.1171989f,33.1104622f,33.1037331f,33.0970154f,33.0903091f,33.0836105f,33.0769272f,33.0702477f,33.0635834f,33.0569267f,33.0502815f,33.043644f,33.0370178f,33.0304031f,33.0237999f,33.0172043f,33.0106163f,33.0040398f,32.9974747f,32.990921f,32.9843712f,32.9778366f,32.9713097f,32.9647942f,32.9582863f,32.9517899f,32.9453011f,32.9388237f,32.932354f,32.9258957f,32.9194489f,32.9130096f,32.9065781f,32.9001579f,32.8937454f,32.8873444f,32.8809509f,32.8745689f,32.8681946f,32.8618317f,32.8554764f,32.8491325f,32.8427963f,32.8364677f,32.8301506f,32.8238411f,32.817543f,32.8112526f,32.8049698f,32.7986984f,32.7924347f,32.7861824f,32.7799377f,32.7737007f,32.7674751f,32.7612572f,32.7550468f,32.748848f,32.7426567f,32.7364731f,32.7303009f,32.7241364f,32.7179794f,32.7118301f,32.7056923f,32.6995621f,32.6934433f,32.6873283f,32.6812248f,32.6751289f,32.6690445f,32.6629639f,32.6568947f,32.6508331f,32.644783f,32.6387367f,32.6327019f,32.6266747f,32.6206551f,32.6146469f,32.6086464f,32.6026497f,32.5966644f,32.5906906f,32.5847206f,32.5787582f,32.5728073f,32.566864f,32.5609283f,32.5550003f,32.5490799f,32.5431709f,32.5372658f,32.5313721f,32.525486f,32.5196037f,32.5137329f,32.5078735f,32.502018f,32.49617f,32.4903297f,32.4845009f,32.4786758f,32.4728622f,32.4670525f,32.4612541f,32.4554634f,32.4496803f,32.4439049f,32.4381332f,32.432373f,32.4266205f,32.4208755f,32.4151382f,32.4094086f,32.4036865f,32.3979721f,32.3922653f,32.3865662f,32.3808746f,32.3751907f,32.3695145f,32.3638458f,32.3581848f,32.3525314f,32.3468819f,32.3412437f,32.3356133f,32.3299866f,32.3243713f,32.3187599f,32.3131599f,32.3075638f,32.3019791f,32.2963982f,32.2908249f,32.2852592f,32.2797012f,32.2741508f,32.2686043f,32.2630692f,32.2575378f,32.252018f,32.2465019f,32.2409935f,32.2354927f,32.2299995f,32.2245102f,32.2190323f,32.2135582f,32.2080917f,32.2026329f,32.1971817f,32.1917381f,32.1863022f,32.1808701f,32.1754456f,32.1700287f,32.1646194f,32.159214f,32.15382f,32.1484299f,32.1430473f,32.1376724f,32.1323013f,32.1269379f,32.1215858f,32.1162338f,32.1108932f,32.1055565f,32.1002312f,32.0949059f,32.089592f,32.0842819f,32.0789795f,32.0736847f,32.0683975f,32.0631142f,32.0578384f,32.0525703f,32.0473061f,32.0420532f,32.0368042f,32.031559f,32.0263214f,32.0210915f,32.0158691f,32.0106506f,32.0054398f,32.0002365f,31.995039f,31.9898472f,31.984663f,31.9794846f,31.9743118f,31.9691448f,31.9639854f,31.9588318f,31.9536839f,31.9485435f,31.943409f,31.9382801f,31.9331589f,31.9280415f,31.9229317f,31.9178276f,31.9127312f,31.9076385f,31.9025536f,31.8974743f,31.8924026f,31.8873348f,31.8822746f,31.8772202f,31.8721714f,31.8671284f,31.8620911f,31.8570614f,31.8520355f,31.8470173f,31.8420048f,31.836998f,31.8319969f,31.8270016f,31.8220139f,31.81703f,31.8120537f,31.8070812f,31.8021164f,31.7971573f,31.7922039f,31.7872562f,31.7823143f,31.7773781f,31.7724476f,31.7675228f,31.7626038f,31.7576904f,31.7527828f,31.7478809f,31.7429848f,31.7380943f,31.7332115f,31.7283325f,31.7234592f,31.7185917f,31.7137299f,31.7088737f,31.7040215f,31.6991768f,31.6943378f,31.6895046f,31.6846752f,31.6798534f,31.6750355f,31.6702232f,31.6654186f,31.6606178f,31.6558228f,31.6510315f,31.6462479f,31.64147f,31.6366959f,31.6319294f,31.6271667f,31.6224098f,31.6176567f,31.6129112f,31.6081715f,31.6034355f,31.5987053f,31.5939808f,31.5892601f,31.584547f,31.5798378f,31.5751343f,31.5704365f,31.5657444f,31.5610561f,31.5563736f,31.5516968f,31.5470238f,31.5423584f,31.5376968f,31.533041f,31.528389f,31.5237427f,31.5191021f,31.5144672f,31.5098362f,31.5052109f,31.5005913f,31.4959774f,31.4913673f,31.4867611f,31.4821625f,31.4775677f,31.4729786f,31.4683933f,31.4638138f,31.45924f,31.45467f,31.4501057f,31.4455471f,31.4409924f,31.4364433f,31.4318981f,31.4273586f,31.4228249f,31.4182949f,31.4137707f,31.4092503f,31.4047356f,31.4002247f,31.3957214f,31.3912201f,31.3867245f,31.3822346f,31.3777485f,31.3732681f,31.3687916f,31.3643208f,31.3598557f,31.3553944f,31.3509369f,31.3464851f,31.3420372f,31.337595f,31.3331585f,31.3287258f,31.324297f,31.3198738f,31.3154545f,31.3110409f,31.3066311f,31.302227f,31.2978268f,31.2934322f,31.2890415f,31.2846565f,31.2802753f,31.275898f,31.2715263f,31.2671585f,31.2627964f,31.2584381f,31.2540836f,31.2497349f,31.2453899f,31.2410507f,31.2367153f,31.2323837f,31.2280579f,31.2237358f,31.2194195f,31.215107f,31.2107983f,31.2064953f,31.2021961f,31.1979008f,31.1936111f,31.1893253f,31.1850433f,31.1807671f,31.1764927f,31.172226f,31.1679611f,31.163702f,31.1594467f,31.1551971f,31.1509514f,31.1467094f,31.1424713f,31.1382389f,31.1340103f,31.1297855f,31.1255665f,31.1213493f,31.1171379f,31.1129322f,31.1087284f,31.1045303f,31.1003361f,31.0961456f,31.0919609f};

class T3_6C16SIG0 {
	
  private:
	
	int fT3_6C16SIG0Wave0_idx;
	
  public:
	
	int getNumInputsT3_6C16SIG0() {
		return 0;
		
	}
	int getNumOutputsT3_6C16SIG0() {
		return 1;
		
	}
	int getInputRateT3_6C16SIG0(int channel) {
		int rate;
		switch (channel) {
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	int getOutputRateT3_6C16SIG0(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 0;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	void instanceInitT3_6C16SIG0(int samplingFreq) {
		fT3_6C16SIG0Wave0_idx = 0;
		
	}
	
	void fillT3_6C16SIG0(int count, float* output) {
		for (int i = 0; (i < count); i = (i + 1)) {
			output[i] = fT3_6C16SIG0Wave0[fT3_6C16SIG0Wave0_idx];
			fT3_6C16SIG0Wave0_idx = ((1 + fT3_6C16SIG0Wave0_idx) % 2001);
			
		}
		
	}
};

T3_6C16SIG0* newT3_6C16SIG0() { return (T3_6C16SIG0*)new T3_6C16SIG0(); }
void deleteT3_6C16SIG0(T3_6C16SIG0* dsp) { delete dsp; }

static float ftbl0T3_6C16SIG0[2001];

#ifndef FAUSTCLASS 
#define FAUSTCLASS T3_6C16
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class T3_6C16 : public dsp {
	
 private:
	
	int fSamplingFreq;
	float fConst0;
	float fConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fRec2[2];
	float fRec1[3];
	float fConst9;
	float fRec0[2];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "T3_6C16");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "T3_6C16");
	}

	virtual int getNumInputs() {
		return 1;
		
	}
	virtual int getNumOutputs() {
		return 1;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		T3_6C16SIG0* sig0 = newT3_6C16SIG0();
		sig0->instanceInitT3_6C16SIG0(samplingFreq);
		sig0->fillT3_6C16SIG0(2001, ftbl0T3_6C16SIG0);
		deleteT3_6C16SIG0(sig0);
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = min(192000.0f, max(1.0f, float(fSamplingFreq)));
		fConst1 = (1.0f / tanf((97.3893738f / fConst0)));
		fConst2 = (fConst1 + 1.0f);
		fConst3 = (0.0f - ((1.0f - fConst1) / fConst2));
		fConst4 = (0.0250000004f / fConst2);
		fConst5 = (1.0f / tanf((609.468994f / fConst0)));
		fConst6 = (fConst5 + 1.0f);
		fConst7 = (0.0f - ((1.0f - fConst5) / fConst6));
		fConst8 = (0.00820000004f / fConst6);
		fConst9 = (0.0f - fConst1);
		
	}
	
	virtual void instanceResetUserInterface() {
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec2[l0] = 0.0f;
			
		}
		for (int l1 = 0; (l1 < 3); l1 = (l1 + 1)) {
			fRec1[l1] = 0.0f;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec0[l2] = 0.0f;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual T3_6C16* clone() {
		return new T3_6C16();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("T3_6C16");
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec2[0] = ((fConst7 * fRec2[1]) + (fConst8 * (fRec1[1] + fRec1[2])));
			float fTemp0 = (200.0f * ((fRec2[0] + float(input0[i])) + 3.62125802f));
			float fTemp1 = max(0.0f, min(2000.0f, floorf(fTemp0)));
			float fTemp2 = ((0.0f < fTemp1)?0.0f:((fTemp1 < 2000.0f)?(fTemp0 - fTemp1):2000.0f));
			fRec1[0] = (((ftbl0T3_6C16SIG0[int(fTemp1)] * (1.0f - fTemp2)) + (fTemp2 * ftbl0T3_6C16SIG0[int((fTemp1 + 1.0f))])) + -81.860733f);
			fRec0[0] = ((fConst3 * fRec0[1]) + (fConst4 * ((fConst1 * fRec1[0]) + (fConst9 * fRec1[1]))));
			output0[i] = FAUSTFLOAT(fRec0[0]);
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			
		}
		
	}

	
};

#endif