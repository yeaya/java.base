#include <sun/security/jca/ProviderList$PreferredEntry.h>
#include <sun/security/jca/ProviderList.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProviderList = ::sun::security::jca::ProviderList;

namespace sun {
	namespace security {
		namespace jca {

void ProviderList$PreferredEntry::init$($String* t, $String* p) {
	$set(this, type, nullptr);
	$set(this, alternateNames, nullptr);
	this->group = false;
	int32_t i = $nc(t)->indexOf(u'.');
	if (i > 0) {
		$set(this, type, t->substring(0, i));
		$set(this, algorithm, t->substring(i + 1));
	} else {
		$set(this, algorithm, t);
	}
	$set(this, provider, p);
	if (this->type != nullptr && this->type->compareToIgnoreCase("Group"_s) == 0) {
		if ($nc(this->algorithm)->compareToIgnoreCase("SHA2"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2Group);
		} else if (this->algorithm->compareToIgnoreCase("HmacSHA2"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::HmacSHA2Group);
		} else if (this->algorithm->compareToIgnoreCase("SHA2RSA"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2RSAGroup);
		} else if (this->algorithm->compareToIgnoreCase("SHA2DSA"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2DSAGroup);
		} else if (this->algorithm->compareToIgnoreCase("SHA2ECDSA"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA2ECDSAGroup);
		} else if (this->algorithm->compareToIgnoreCase("SHA3"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::SHA3Group);
		} else if (this->algorithm->compareToIgnoreCase("HmacSHA3"_s) == 0) {
			$init($ProviderList);
			$set(this, alternateNames, $ProviderList::HmacSHA3Group);
		}
		if (this->alternateNames != nullptr) {
			this->group = true;
		}
	} else if ($nc(this->algorithm)->compareToIgnoreCase("SHA1"_s) == 0) {
		$set(this, alternateNames, $new($StringArray, {"SHA-1"_s}));
	} else if (this->algorithm->compareToIgnoreCase("SHA-1"_s) == 0) {
		$set(this, alternateNames, $new($StringArray, {"SHA1"_s}));
	}
}

bool ProviderList$PreferredEntry::match($String* t, $String* a) {
	$useLocalObjectStack();
	$init($ProviderList);
	if ($ProviderList::debug != nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Config check:  "_s);
		var$0->append($(toString()));
		var$0->append(" == "_s);
		var$0->append($(print(t, a, nullptr)));
		$ProviderList::debug->println($$str(var$0));
	}
	if (this->type != nullptr && !this->group && this->type->compareToIgnoreCase(t) != 0) {
		return false;
	}
	if (!this->group && $nc(a)->compareToIgnoreCase(this->algorithm) == 0) {
		if ($ProviderList::debug != nullptr) {
			$ProviderList::debug->println($$str({"Config entry matched:  "_s, $(toString())}));
		}
		return true;
	}
	if (this->alternateNames != nullptr) {
		$var($StringArray, arr$, this->alternateNames);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, alt, arr$->get(i$));
			{
				if ($ProviderList::debug != nullptr) {
					$ProviderList::debug->println($$str({"AltName check:  "_s, $(print(this->type, alt, this->provider))}));
				}
				if ($nc(a)->compareToIgnoreCase(alt) == 0) {
					if ($ProviderList::debug != nullptr) {
						$ProviderList::debug->println($$str({"AltName entry matched:  "_s, this->provider}));
					}
					return true;
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
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, type)},
		{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, algorithm)},
		{"provider", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, provider)},
		{"alternateNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, alternateNames)},
		{"group", "Z", nullptr, $PRIVATE, $field(ProviderList$PreferredEntry, group)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(ProviderList$PreferredEntry, init$, void, $String*, $String*)},
		{"match", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(ProviderList$PreferredEntry, match, bool, $String*, $String*)},
		{"print", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ProviderList$PreferredEntry, print, $String*, $String*, $String*, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProviderList$PreferredEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderList$PreferredEntry", "sun.security.jca.ProviderList", "PreferredEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderList$PreferredEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderList"
	};
	$loadClass(ProviderList$PreferredEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderList$PreferredEntry);
	});
	return class$;
}

$Class* ProviderList$PreferredEntry::class$ = nullptr;

		} // jca
	} // security
} // sun