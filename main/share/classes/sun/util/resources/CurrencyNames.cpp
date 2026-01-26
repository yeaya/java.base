#include <sun/util/resources/CurrencyNames.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _CurrencyNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.CurrencyNames",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_MethodInfo_
};

$Object* allocate$CurrencyNames($Class* clazz) {
	return $of($alloc(CurrencyNames));
}

void CurrencyNames::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ADP"_s),
			$of("ADP"_s)
		}),
		$$new($ObjectArray, {
			$of("AED"_s),
			$of("AED"_s)
		}),
		$$new($ObjectArray, {
			$of("AFA"_s),
			$of("AFA"_s)
		}),
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of("AFN"_s)
		}),
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AMD"_s),
			$of("AMD"_s)
		}),
		$$new($ObjectArray, {
			$of("ANG"_s),
			$of("ANG"_s)
		}),
		$$new($ObjectArray, {
			$of("AOA"_s),
			$of("AOA"_s)
		}),
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("ATS"_s),
			$of("ATS"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AUD"_s)
		}),
		$$new($ObjectArray, {
			$of("AWG"_s),
			$of("AWG"_s)
		}),
		$$new($ObjectArray, {
			$of("AYM"_s),
			$of("AYM"_s)
		}),
		$$new($ObjectArray, {
			$of("AZM"_s),
			$of("AZM"_s)
		}),
		$$new($ObjectArray, {
			$of("AZN"_s),
			$of("AZN"_s)
		}),
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of("BAM"_s)
		}),
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("BBD"_s)
		}),
		$$new($ObjectArray, {
			$of("BDT"_s),
			$of("BDT"_s)
		}),
		$$new($ObjectArray, {
			$of("BEF"_s),
			$of("BEF"_s)
		}),
		$$new($ObjectArray, {
			$of("BGL"_s),
			$of("BGL"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("BHD"_s),
			$of("BHD"_s)
		}),
		$$new($ObjectArray, {
			$of("BIF"_s),
			$of("BIF"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BMD"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("BND"_s)
		}),
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("BOB"_s)
		}),
		$$new($ObjectArray, {
			$of("BOV"_s),
			$of("BOV"_s)
		}),
		$$new($ObjectArray, {
			$of("BRL"_s),
			$of("BRL"_s)
		}),
		$$new($ObjectArray, {
			$of("BSD"_s),
			$of("BSD"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("BTN"_s)
		}),
		$$new($ObjectArray, {
			$of("BWP"_s),
			$of("BWP"_s)
		}),
		$$new($ObjectArray, {
			$of("BYB"_s),
			$of("BYB"_s)
		}),
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("BYN"_s)
		}),
		$$new($ObjectArray, {
			$of("BYR"_s),
			$of("BYR"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("CAD"_s)
		}),
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("CDF"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLF"_s),
			$of("CLF"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of("CNY"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("CRC"_s),
			$of("CRC"_s)
		}),
		$$new($ObjectArray, {
			$of("CSD"_s),
			$of("CSD"_s)
		}),
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CUP"_s)
		}),
		$$new($ObjectArray, {
			$of("CVE"_s),
			$of("CVE"_s)
		}),
		$$new($ObjectArray, {
			$of("CYP"_s),
			$of("CYP"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of("CZK"_s)
		}),
		$$new($ObjectArray, {
			$of("DEM"_s),
			$of("DEM"_s)
		}),
		$$new($ObjectArray, {
			$of("DJF"_s),
			$of("DJF"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("DKK"_s)
		}),
		$$new($ObjectArray, {
			$of("DOP"_s),
			$of("DOP"_s)
		}),
		$$new($ObjectArray, {
			$of("DZD"_s),
			$of("DZD"_s)
		}),
		$$new($ObjectArray, {
			$of("EEK"_s),
			$of("EEK"_s)
		}),
		$$new($ObjectArray, {
			$of("EGP"_s),
			$of("EGP"_s)
		}),
		$$new($ObjectArray, {
			$of("ERN"_s),
			$of("ERN"_s)
		}),
		$$new($ObjectArray, {
			$of("ESP"_s),
			$of("ESP"_s)
		}),
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("ETB"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of("EUR"_s)
		}),
		$$new($ObjectArray, {
			$of("FIM"_s),
			$of("FIM"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("FRF"_s),
			$of("FRF"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of("GBP"_s)
		}),
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of("GEL"_s)
		}),
		$$new($ObjectArray, {
			$of("GHC"_s),
			$of("GHC"_s)
		}),
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of("GHS"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("GMD"_s),
			$of("GMD"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("GRD"_s),
			$of("GRD"_s)
		}),
		$$new($ObjectArray, {
			$of("GTQ"_s),
			$of("GTQ"_s)
		}),
		$$new($ObjectArray, {
			$of("GWP"_s),
			$of("GWP"_s)
		}),
		$$new($ObjectArray, {
			$of("GYD"_s),
			$of("GYD"_s)
		}),
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of("HKD"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("HRK"_s),
			$of("HRK"_s)
		}),
		$$new($ObjectArray, {
			$of("HTG"_s),
			$of("HTG"_s)
		}),
		$$new($ObjectArray, {
			$of("HUF"_s),
			$of("HUF"_s)
		}),
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("IDR"_s)
		}),
		$$new($ObjectArray, {
			$of("IEP"_s),
			$of("IEP"_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of("ILS"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
		}),
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of("IQD"_s)
		}),
		$$new($ObjectArray, {
			$of("IRR"_s),
			$of("IRR"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("ISK"_s)
		}),
		$$new($ObjectArray, {
			$of("ITL"_s),
			$of("ITL"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JMD"_s)
		}),
		$$new($ObjectArray, {
			$of("JOD"_s),
			$of("JOD"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of("JPY"_s)
		}),
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("KES"_s)
		}),
		$$new($ObjectArray, {
			$of("KGS"_s),
			$of("KGS"_s)
		}),
		$$new($ObjectArray, {
			$of("KHR"_s),
			$of("KHR"_s)
		}),
		$$new($ObjectArray, {
			$of("KMF"_s),
			$of("KMF"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of("KRW"_s)
		}),
		$$new($ObjectArray, {
			$of("KWD"_s),
			$of("KWD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("KZT"_s),
			$of("KZT"_s)
		}),
		$$new($ObjectArray, {
			$of("LAK"_s),
			$of("LAK"_s)
		}),
		$$new($ObjectArray, {
			$of("LBP"_s),
			$of("LBP"_s)
		}),
		$$new($ObjectArray, {
			$of("LKR"_s),
			$of("LKR"_s)
		}),
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("LRD"_s)
		}),
		$$new($ObjectArray, {
			$of("LSL"_s),
			$of("LSL"_s)
		}),
		$$new($ObjectArray, {
			$of("LTL"_s),
			$of("LTL"_s)
		}),
		$$new($ObjectArray, {
			$of("LUF"_s),
			$of("LUF"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
		}),
		$$new($ObjectArray, {
			$of("LYD"_s),
			$of("LYD"_s)
		}),
		$$new($ObjectArray, {
			$of("MAD"_s),
			$of("MAD"_s)
		}),
		$$new($ObjectArray, {
			$of("MDL"_s),
			$of("MDL"_s)
		}),
		$$new($ObjectArray, {
			$of("MGA"_s),
			$of("MGA"_s)
		}),
		$$new($ObjectArray, {
			$of("MGF"_s),
			$of("MGF"_s)
		}),
		$$new($ObjectArray, {
			$of("MKD"_s),
			$of("MKD"_s)
		}),
		$$new($ObjectArray, {
			$of("MMK"_s),
			$of("MMK"_s)
		}),
		$$new($ObjectArray, {
			$of("MNT"_s),
			$of("MNT"_s)
		}),
		$$new($ObjectArray, {
			$of("MOP"_s),
			$of("MOP"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("MTL"_s),
			$of("MTL"_s)
		}),
		$$new($ObjectArray, {
			$of("MUR"_s),
			$of("MUR"_s)
		}),
		$$new($ObjectArray, {
			$of("MVR"_s),
			$of("MVR"_s)
		}),
		$$new($ObjectArray, {
			$of("MWK"_s),
			$of("MWK"_s)
		}),
		$$new($ObjectArray, {
			$of("MXN"_s),
			$of("MXN"_s)
		}),
		$$new($ObjectArray, {
			$of("MXV"_s),
			$of("MXV"_s)
		}),
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("MYR"_s)
		}),
		$$new($ObjectArray, {
			$of("MZM"_s),
			$of("MZM"_s)
		}),
		$$new($ObjectArray, {
			$of("MZN"_s),
			$of("MZN"_s)
		}),
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("NAD"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of("NGN"_s)
		}),
		$$new($ObjectArray, {
			$of("NIO"_s),
			$of("NIO"_s)
		}),
		$$new($ObjectArray, {
			$of("NLG"_s),
			$of("NLG"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("NOK"_s)
		}),
		$$new($ObjectArray, {
			$of("NPR"_s),
			$of("NPR"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of("NZD"_s)
		}),
		$$new($ObjectArray, {
			$of("OMR"_s),
			$of("OMR"_s)
		}),
		$$new($ObjectArray, {
			$of("PAB"_s),
			$of("PAB"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("PGK"_s),
			$of("PGK"_s)
		}),
		$$new($ObjectArray, {
			$of("PHP"_s),
			$of("PHP"_s)
		}),
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("PTE"_s),
			$of("PTE"_s)
		}),
		$$new($ObjectArray, {
			$of("PYG"_s),
			$of("PYG"_s)
		}),
		$$new($ObjectArray, {
			$of("QAR"_s),
			$of("QAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ROL"_s),
			$of("ROL"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of("RSD"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("RUR"_s),
			$of("RUR"_s)
		}),
		$$new($ObjectArray, {
			$of("RWF"_s),
			$of("RWF"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SBD"_s)
		}),
		$$new($ObjectArray, {
			$of("SCR"_s),
			$of("SCR"_s)
		}),
		$$new($ObjectArray, {
			$of("SDD"_s),
			$of("SDD"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of("SDG"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("SEK"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("SHP"_s),
			$of("SHP"_s)
		}),
		$$new($ObjectArray, {
			$of("SIT"_s),
			$of("SIT"_s)
		}),
		$$new($ObjectArray, {
			$of("SKK"_s),
			$of("SKK"_s)
		}),
		$$new($ObjectArray, {
			$of("SLL"_s),
			$of("SLL"_s)
		}),
		$$new($ObjectArray, {
			$of("SOS"_s),
			$of("SOS"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("SRG"_s),
			$of("SRG"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of("SSP"_s)
		}),
		$$new($ObjectArray, {
			$of("STD"_s),
			$of("STD"_s)
		}),
		$$new($ObjectArray, {
			$of("STN"_s),
			$of("STN"_s)
		}),
		$$new($ObjectArray, {
			$of("SVC"_s),
			$of("SVC"_s)
		}),
		$$new($ObjectArray, {
			$of("SYP"_s),
			$of("SYP"_s)
		}),
		$$new($ObjectArray, {
			$of("SZL"_s),
			$of("SZL"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of("TJS"_s)
		}),
		$$new($ObjectArray, {
			$of("TMM"_s),
			$of("TMM"_s)
		}),
		$$new($ObjectArray, {
			$of("TMT"_s),
			$of("TMT"_s)
		}),
		$$new($ObjectArray, {
			$of("TND"_s),
			$of("TND"_s)
		}),
		$$new($ObjectArray, {
			$of("TOP"_s),
			$of("TOP"_s)
		}),
		$$new($ObjectArray, {
			$of("TPE"_s),
			$of("TPE"_s)
		}),
		$$new($ObjectArray, {
			$of("TRL"_s),
			$of("TRL"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("TWD"_s)
		}),
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TZS"_s)
		}),
		$$new($ObjectArray, {
			$of("UAH"_s),
			$of("UAH"_s)
		}),
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("UGX"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("USD"_s)
		}),
		$$new($ObjectArray, {
			$of("USN"_s),
			$of("USN"_s)
		}),
		$$new($ObjectArray, {
			$of("USS"_s),
			$of("USS"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of("UZS"_s)
		}),
		$$new($ObjectArray, {
			$of("VEB"_s),
			$of("VEB"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("VES"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
		}),
		$$new($ObjectArray, {
			$of("VUV"_s),
			$of("VUV"_s)
		}),
		$$new($ObjectArray, {
			$of("WST"_s),
			$of("WST"_s)
		}),
		$$new($ObjectArray, {
			$of("XAF"_s),
			$of("XAF"_s)
		}),
		$$new($ObjectArray, {
			$of("XAG"_s),
			$of("XAG"_s)
		}),
		$$new($ObjectArray, {
			$of("XAU"_s),
			$of("XAU"_s)
		}),
		$$new($ObjectArray, {
			$of("XBA"_s),
			$of("XBA"_s)
		}),
		$$new($ObjectArray, {
			$of("XBB"_s),
			$of("XBB"_s)
		}),
		$$new($ObjectArray, {
			$of("XBC"_s),
			$of("XBC"_s)
		}),
		$$new($ObjectArray, {
			$of("XBD"_s),
			$of("XBD"_s)
		}),
		$$new($ObjectArray, {
			$of("XCD"_s),
			$of("XCD"_s)
		}),
		$$new($ObjectArray, {
			$of("XDR"_s),
			$of("XDR"_s)
		}),
		$$new($ObjectArray, {
			$of("XFO"_s),
			$of("XFO"_s)
		}),
		$$new($ObjectArray, {
			$of("XFU"_s),
			$of("XFU"_s)
		}),
		$$new($ObjectArray, {
			$of("XOF"_s),
			$of("XOF"_s)
		}),
		$$new($ObjectArray, {
			$of("XPD"_s),
			$of("XPD"_s)
		}),
		$$new($ObjectArray, {
			$of("XPF"_s),
			$of("XPF"_s)
		}),
		$$new($ObjectArray, {
			$of("XPT"_s),
			$of("XPT"_s)
		}),
		$$new($ObjectArray, {
			$of("XSU"_s),
			$of("XSU"_s)
		}),
		$$new($ObjectArray, {
			$of("XTS"_s),
			$of("XTS"_s)
		}),
		$$new($ObjectArray, {
			$of("XUA"_s),
			$of("XUA"_s)
		}),
		$$new($ObjectArray, {
			$of("XXX"_s),
			$of("XXX"_s)
		}),
		$$new($ObjectArray, {
			$of("YER"_s),
			$of("YER"_s)
		}),
		$$new($ObjectArray, {
			$of("YUM"_s),
			$of("YUM"_s)
		}),
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("ZAR"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMK"_s),
			$of("ZMK"_s)
		}),
		$$new($ObjectArray, {
			$of("ZMW"_s),
			$of("ZMW"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWD"_s),
			$of("ZWD"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWL"_s),
			$of("ZWL"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWN"_s),
			$of("ZWN"_s)
		}),
		$$new($ObjectArray, {
			$of("ZWR"_s),
			$of("ZWR"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Andorran Peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("United Arab Emirates Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Afghan Afghani (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghan Afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albanian Lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Armenian Dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Netherlands Antillean Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolan Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentine Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("Austrian Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruban Florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of("Azerbaijani Manat (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Azerbaijan Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bosnia-Herzegovina Convertible Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbadian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Bangladeshi Taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Bulgarian Hard Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bulgarian Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahraini Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermudan Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunei Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivian Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivian Mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazilian Real"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Bhutanese Ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswanan Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of("Belarusian Ruble (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarusian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of("Belarusian Ruble (2000-2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belize Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Canadian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Congolese Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Swiss Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Chilean Unit of Account (UF)"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Chilean Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Chinese Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Colombian Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Costa Rican Colón"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("Serbian Dinar (2002-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Cuban Convertible Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Cuban Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Cape Verdean Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Cypriot Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Czech Republic Koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("German Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Djiboutian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danish Krone"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominican Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Algerian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Estonian Kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Egyptian Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritrean Nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Spanish Peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ethiopian Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finnish Markka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fijian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Falkland Islands Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("French Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("British Pound Sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Georgian Lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Ghanaian Cedi (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ghanaian Cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltar Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambian Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Guinean Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Greek Drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Guatemalan Quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Guyanaese Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hong Kong Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Honduran Lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Haitian Gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Hungarian Forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonesian Rupiah"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Irish Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Israeli New Sheqel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Iraqi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Iranian Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Icelandic Króna"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Italian Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaican Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordanian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanese Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenyan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Kyrgystani Som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Cambodian Riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Comorian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("North Korean Won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("South Korean Won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Kuwaiti Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Cayman Islands Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Kazakhstani Tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Lao Kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Lebanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Sri Lankan Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesotho Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Lithuanian Litas"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luxembourgian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Latvian Lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libyan Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Moroccan Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldovan Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Malagasy Ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Malagasy Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Macedonian Denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Myanma Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongolian Tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Macanese Pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of("Mauritanian Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritanian Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Maltese Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauritian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Maldivian Rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawian Malawi Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Mexican Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Mexican Investment Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malaysian Ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambican Metical (1980-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambican Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigerian Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nicaraguan Córdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Dutch Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Norwegian Krone"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepalese Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("New Zealand Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Omani Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamanian Balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peruvian Sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Papua New Guinean Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Philippine Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistani Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Polish Zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portuguese Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paraguayan Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Qatari Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("Romanian Leu (1952-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Romanian Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serbian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("Russian Ruble (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rwandan Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Solomon Islands Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Seychellois Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("Sudanese Dinar (1992-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Swedish Krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapore Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Saint Helena Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Slovenian Tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slovak Koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leonean Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somali Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinamese Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinamese Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("South Sudanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"São Tomé and Príncipe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"São Tomé and Príncipe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Salvadoran Colón"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Syrian Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Swazi Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Thai Baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tajikistani Somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of("Turkmenistani Manat (1993-2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Turkmenistani Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunisian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Tongan Paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timorese Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("Turkish Lira (1922-2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turkish Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidad and Tobago Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("New Taiwan Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tanzanian Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrainian Hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Ugandan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("US Dollar (Next day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("US Dollar (Same day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruguayan Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Uzbekistan Som"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Venezuelan Bolívar (1871-2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venezuelan Bolívar"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Venezuelan Bolívar Soberano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vietnamese Dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu Vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoan Tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA Franc BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Silver"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Gold"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("European Composite Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("European Monetary Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("European Unit of Account (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("European Unit of Account (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("East Caribbean Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Special Drawing Rights"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("French Gold Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("French UIC-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA Franc BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platinum"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("Testing Currency Code"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of("ADB Unit of Account"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Unknown Currency"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Yemeni Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("Yugoslavian New Dinar (1994-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("South African Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of("Zambian Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Zimbabwean Dollar (1980-2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Zimbabwean Dollar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Zimbabwean Dollar (2008)"_s)
		})
	});
}

CurrencyNames::CurrencyNames() {
}

$Class* CurrencyNames::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames, name, initialize, &_CurrencyNames_ClassInfo_, allocate$CurrencyNames);
	return class$;
}

$Class* CurrencyNames::class$ = nullptr;

		} // resources
	} // util
} // sun