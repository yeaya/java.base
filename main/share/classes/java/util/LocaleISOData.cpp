#include <java/util/LocaleISOData.h>

#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$FieldInfo _LocaleISOData_FieldInfo_[] = {
	{"isoLanguageTable", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LocaleISOData, isoLanguageTable)},
	{"isoCountryTable", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LocaleISOData, isoCountryTable)},
	{"ISO3166_3", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LocaleISOData, ISO3166_3)},
	{}
};

$MethodInfo _LocaleISOData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LocaleISOData::*)()>(&LocaleISOData::init$))},
	{"computeISO3166_1Alpha3Countries", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $method(static_cast<$Set*(*)()>(&LocaleISOData::computeISO3166_1Alpha3Countries))},
	{}
};

$ClassInfo _LocaleISOData_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.LocaleISOData",
	"java.lang.Object",
	nullptr,
	_LocaleISOData_FieldInfo_,
	_LocaleISOData_MethodInfo_
};

$Object* allocate$LocaleISOData($Class* clazz) {
	return $of($alloc(LocaleISOData));
}

$String* LocaleISOData::isoLanguageTable = nullptr;
$String* LocaleISOData::isoCountryTable = nullptr;
$StringArray* LocaleISOData::ISO3166_3 = nullptr;

$Set* LocaleISOData::computeISO3166_1Alpha3Countries() {
	$init(LocaleISOData);
	$useLocalCurrentObjectStackCache();
	int32_t tableLength = $nc(LocaleISOData::isoCountryTable)->length();
	$var($StringArray, isoTable, $new($StringArray, tableLength / 5));
	{
		int32_t i = 0;
		int32_t index = 0;
		for (; index < tableLength; ++i, index += 5) {
			isoTable->set(i, $($nc(LocaleISOData::isoCountryTable)->substring(index + 2, index + 5)));
		}
	}
	return $Set::of(isoTable);
}

void LocaleISOData::init$() {
}

void clinit$LocaleISOData($Class* class$) {
	$assignStatic(LocaleISOData::isoLanguageTable, "aaaarababkaeaveafafrakakaamamhanargararaasasmavavaayaymazazebabakbebelbgbulbhbihbibisbmbambnbenbobodbrbrebsboscacatcechechchacocoscrcrecscescuchucvchvcycymdadandedeudvdivdzdzoeeeweelellenengeoepoesspaetesteueusfafasfffulfifinfjfijfofaofrfrafyfrygaglegdglaglglggngrngugujgvglvhahauhehebhihinhohmohrhrvhthathuhunhyhyehzheriainaidindieileigiboiiiiiikipkinindioidoisislititaiuikuiwhebjajpnjiyidjvjavkakatkgkonkikikkjkuakkkazklkalkmkhmknkankokorkrkaukskaskukurkvkomkwcorkykirlalatlbltzlgluglilimlnlinlolaoltlitlulublvlavmgmlgmhmahmimrimkmkdmlmalmnmonmomolmrmarmsmsamtmltmymyananaunbnobndndenenepngndonlnldnnnnononornrnblnvnavnynyaocociojojiomormororiososspapanpipliplpolpspusptporququermrohrnrunroronrurusrwkinsasanscsrdsdsndsesmesgsagsisinskslkslslvsmsmosnsnasosomsqsqisrsrpsssswstsotsusunsvsweswswatatamteteltgtgkththatitirtktuktltgltntsntotontrturtstsotttattwtwitytahuguigukukrururduzuzbvevenvivievovolwawlnwowolxhxhoyiyidyoyorzazhazhzhozuzul"_s);
	$assignStatic(LocaleISOData::isoCountryTable, "ADANDAEAREAFAFGAGATGAIAIAALALBAMARMAOAGOAQATAARARGASASMATAUTAUAUSAWABWAXALAAZAZEBABIHBBBRBBDBGDBEBELBFBFABGBGRBHBHRBIBDIBJBENBLBLMBMBMUBNBRNBOBOLBQBESBRBRABSBHSBTBTNBVBVTBWBWABYBLRBZBLZCACANCCCCKCDCODCFCAFCGCOGCHCHECICIVCKCOKCLCHLCMCMRCNCHNCOCOLCRCRICUCUBCVCPVCWCUWCXCXRCYCYPCZCZEDEDEUDJDJIDKDNKDMDMADODOMDZDZAECECUEEESTEGEGYEHESHERERIESESPETETHFIFINFJFJIFKFLKFMFSMFOFROFRFRAGAGABGBGBRGDGRDGEGEOGFGUFGGGGYGHGHAGIGIBGLGRLGMGMBGNGINGPGLPGQGNQGRGRCGSSGSGTGTMGUGUMGWGNBGYGUYHKHKGHMHMDHNHNDHRHRVHTHTIHUHUNIDIDNIEIRLILISRIMIMNININDIOIOTIQIRQIRIRNISISLITITAJEJEYJMJAMJOJORJPJPNKEKENKGKGZKHKHMKIKIRKMCOMKNKNAKPPRKKRKORKWKWTKYCYMKZKAZLALAOLBLBNLCLCALILIELKLKALRLBRLSLSOLTLTULULUXLVLVALYLBYMAMARMCMCOMDMDAMEMNEMFMAFMGMDGMHMHLMKMKDMLMLIMMMMRMNMNGMOMACMPMNPMQMTQMRMRTMSMSRMTMLTMUMUSMVMDVMWMWIMXMEXMYMYSMZMOZNANAMNCNCLNENERNFNFKNGNGANINICNLNLDNONORNPNPLNRNRUNUNIUNZNZLOMOMNPAPANPEPERPFPYFPGPNGPHPHLPKPAKPLPOLPMSPMPNPCNPRPRIPSPSEPTPRTPWPLWPYPRYQAQATREREUROROURSSRBRURUSRWRWASASAUSBSLBSCSYCSDSDNSESWESGSGPSHSHNSISVNSJSJMSKSVKSLSLESMSMRSNSE"
		"NSOSOMSRSURSSSSDSTSTPSVSLVSXSXMSYSYRSZSWZTCTCATDTCDTFATFTGTGOTHTHATJTJKTKTKLTLTLSTMTKMTNTUNTOTONTRTURTTTTOTVTUVTWTWNTZTZAUAUKRUGUGAUMUMIUSUSAUYURYUZUZBVAVATVCVCTVEVENVGVGBVIVIRVNVNMVUVUTWFWLFWSWSMYEYEMYTMYTZAZAFZMZMBZWZWE"_s);
	$assignStatic(LocaleISOData::ISO3166_3, $new($StringArray, {
		"AIDJ"_s,
		"ANHH"_s,
		"BQAQ"_s,
		"BUMM"_s,
		"BYAA"_s,
		"CSHH"_s,
		"CSXX"_s,
		"CTKI"_s,
		"DDDE"_s,
		"DYBJ"_s,
		"FQHH"_s,
		"FXFR"_s,
		"GEHH"_s,
		"HVBF"_s,
		"JTUM"_s,
		"MIUM"_s,
		"NHVU"_s,
		"NQAQ"_s,
		"NTHH"_s,
		"PCHH"_s,
		"PUUM"_s,
		"PZPA"_s,
		"RHZW"_s,
		"SKIN"_s,
		"SUHH"_s,
		"TPTL"_s,
		"VDVN"_s,
		"WKUM"_s,
		"YDYE"_s,
		"YUCS"_s,
		"ZRCD"_s
	}));
}

LocaleISOData::LocaleISOData() {
}

$Class* LocaleISOData::load$($String* name, bool initialize) {
	$loadClass(LocaleISOData, name, initialize, &_LocaleISOData_ClassInfo_, clinit$LocaleISOData, allocate$LocaleISOData);
	return class$;
}

$Class* LocaleISOData::class$ = nullptr;

	} // util
} // java