#include <sun/security/jca/ProviderList$PreferredEntry.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/jca/ProviderList.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProviderList = ::sun::security::jca::ProviderList;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderList$PreferredEntry_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, type)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, algorithm)},
	{"provider", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, provider)},
	{"alternateNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, alternateNames)},
	{"group", "Z", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, group)},
	{}
};

$MethodInfo _ProviderList$PreferredEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ProviderList$PreferredEntry::*)($String*,$String*)>(&ProviderList$PreferredEntry::init$))},
	{"match", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, 0},
	{"print", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ProviderList$PreferredEntry::*)($String*,$String*,$String*)>(&ProviderList$PreferredEntry::print))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProviderList$PreferredEntry_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderList$PreferredEntry", "sun.security.jca.ProviderList", "PreferredEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProviderList$PreferredEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderList$PreferredEntry",
	"java.lang.Object",
	nullptr,
	_ProviderList$PreferredEntry_FieldInfo_,
	_ProviderList$PreferredEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ProviderList$PreferredEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderList"
};

$Object* allocate$ProviderList$PreferredEntry($Class* clazz) {
	return $of($alloc(ProviderList$PreferredEntry));
}

void ProviderList$PreferredEntry::init$($String* t, $String* p) {
	$set(this, type, nullptr);
	$set(this, alternateNames, nullptr);
	this->group = false;
	int32_t i = $nc(t)->indexOf((int32_t)u'.');
	if (i > 0) {
		$set(this, type, t->substring(0, i));
		$set(this, algorithm, t->substring(i + 1));
	} else {
		$set(this, algorithm, t);
	}
	$set(this, provider, p);
	if (this->type != nullptr && $nc(this->type)->compareToIgnoreCase("Group"_s) == 0) {
		if ($nc(this->algorithm)->compareToIgnoreCase("SHA2"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2Group);
		} else if ($nc(this->algorithm)->compareToIgnoreCase("HmacSHA2"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::HmacSHA2Group);
		} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA2RSA"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2RSAGroup);
		} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA2DSA"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2DSAGroup);
		} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA2ECDSA"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2ECDSAGroup);
		} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA3"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA3Group);
		} else if ($nc(this->algorithm)->compareToIgnoreCase("HmacSHA3"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::HmacSHA3Group);
		}
		if (this->alternateNames != nullptr) {
			this->group = true;
		}
	} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA1"_s) == 0) {
		$set(this, alternateNames, $new($StringArray, {"SHA-1"_s}));
	} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA-1"_s) == 0) {
		$set(this, alternateNames, $new($StringArray, {"SHA1"_s}));
	}
}

bool ProviderList$PreferredEntry::match($String* t, $String* a) {
	$useLocalCurrentObjectStackCache();
	$init($ProviderList);
	if ($ProviderList::debug != nullptr) {
		$var($String, var$0, $$str({"Config check:  "_s, $(toString()), " == "_s}));
		$nc($ProviderList::debug)->println($$concat(var$0, $(print(t, a, nullptr))));
	}
	if (this->type != nullptr && !this->group && $nc(this->type)->compareToIgnoreCase(t) != 0) {
		return false;
	}
	if (!this->group && $nc(a)->compareToIgnoreCase(this->algorithm) == 0) {
		if ($ProviderList::debug != nullptr) {
			$nc($ProviderList::debug)->println($$str({"Config entry matched:  "_s, $(toString())}));
		}
		return true;
	}
	if (this->alternateNames != nullptr) {
		{
			$var($StringArray, arr$, this->alternateNames);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, alt, arr$->get(i$));
				{
					if ($ProviderList::debug != nullptr) {
						$nc($ProviderList::debug)->println($$str({"AltName check:  "_s, $(print(this->type, alt, this->provider))}));
					}
					if ($nc(a)->compareToIgnoreCase(alt) == 0) {
						if ($ProviderList::debug != nullptr) {
							$nc($ProviderList::debug)->println($$str({"AltName entry matched:  "_s, this->provider}));
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

$String* ProviderList$PreferredEntry::print($String* t, $String* a, $String* p) {
	return $str({"["_s, ((t != nullptr) ? t : ""_s), ", "_s, a, ((p != nullptr) ? $$str({" : "_s, p}) : ""_s), "] "_s});
}

$String* ProviderList$PreferredEntry::toString() {
	return print(this->type, this->algorithm, this->provider);
}

ProviderList$PreferredEntry::ProviderList$PreferredEntry() {
}

$Class* ProviderList$PreferredEntry::load$($String* name, bool initialize) {
	$loadClass(ProviderList$PreferredEntry, name, initialize, &_ProviderList$PreferredEntry_ClassInfo_, allocate$ProviderList$PreferredEntry);
	return class$;
}

$Class* ProviderList$PreferredEntry::class$ = nullptr;

		} // jca
	} // security
} // sun