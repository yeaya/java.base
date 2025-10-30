#include <sun/security/util/DomainName$OtherMatch.h>

#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/security/util/DomainName$RegisteredDomainImpl.h>
#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName$Rule.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <sun/security/util/RegisteredDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $DomainName = ::sun::security::util::DomainName;
using $DomainName$Match = ::sun::security::util::DomainName$Match;
using $DomainName$RegisteredDomainImpl = ::sun::security::util::DomainName$RegisteredDomainImpl;
using $DomainName$Rule = ::sun::security::util::DomainName$Rule;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$OtherMatch_FieldInfo_[] = {
	{"rule", "Lsun/security/util/DomainName$Rule;", nullptr, $PRIVATE | $FINAL, $field(DomainName$OtherMatch, rule)},
	{"numLabels", "I", nullptr, $PRIVATE | $FINAL, $field(DomainName$OtherMatch, numLabels)},
	{"target", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DomainName$OtherMatch, target)},
	{}
};

$MethodInfo _DomainName$OtherMatch_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DomainName$Rule;ILjava/util/LinkedList;)V", "(Lsun/security/util/DomainName$Rule;ILjava/util/LinkedList<Ljava/lang/String;>;)V", 0, $method(static_cast<void(DomainName$OtherMatch::*)($DomainName$Rule*,int32_t,$LinkedList*)>(&DomainName$OtherMatch::init$))},
	{"getSuffixes", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DomainName$OtherMatch::*)(int32_t)>(&DomainName$OtherMatch::getSuffixes))},
	{"registeredDomain", "()Lsun/security/util/RegisteredDomain;", nullptr, $PUBLIC},
	{"type", "()Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DomainName$OtherMatch_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$OtherMatch", "sun.security.util.DomainName", "OtherMatch", $PRIVATE | $STATIC},
	{"sun.security.util.DomainName$Match", "sun.security.util.DomainName", "Match", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DomainName$OtherMatch_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DomainName$OtherMatch",
	"java.lang.Object",
	"sun.security.util.DomainName$Match",
	_DomainName$OtherMatch_FieldInfo_,
	_DomainName$OtherMatch_MethodInfo_,
	nullptr,
	nullptr,
	_DomainName$OtherMatch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$OtherMatch($Class* clazz) {
	return $of($alloc(DomainName$OtherMatch));
}

void DomainName$OtherMatch::init$($DomainName$Rule* rule, int32_t numLabels, $LinkedList* target) {
	$set(this, rule, rule);
	this->numLabels = numLabels;
	$set(this, target, target);
}

$RegisteredDomain* DomainName$OtherMatch::registeredDomain() {
	$useLocalCurrentObjectStackCache();
	int32_t nlabels = this->numLabels + 1;
	if (nlabels > $nc(this->target)->size()) {
		return nullptr;
	}
	$var($String, var$0, getSuffixes(nlabels));
	$var($RegisteredDomain$Type, var$1, $nc(this->rule)->auth);
	return $new($DomainName$RegisteredDomainImpl, var$0, var$1, $(getSuffixes(this->numLabels)));
}

$DomainName$Rule$Type* DomainName$OtherMatch::type() {
	return $nc(this->rule)->type;
}

$String* DomainName$OtherMatch::getSuffixes(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, targetIter, $nc(this->target)->descendingIterator());
	$var($StringBuilder, sb, $new($StringBuilder));
	while (n > 0 && $nc(targetIter)->hasNext()) {
		$var($String, s, $cast($String, targetIter->next()));
		sb->insert(0, s);
		if (n > 1) {
			sb->insert(0, u'.');
		}
		--n;
	}
	return sb->toString();
}

DomainName$OtherMatch::DomainName$OtherMatch() {
}

$Class* DomainName$OtherMatch::load$($String* name, bool initialize) {
	$loadClass(DomainName$OtherMatch, name, initialize, &_DomainName$OtherMatch_ClassInfo_, allocate$DomainName$OtherMatch);
	return class$;
}

$Class* DomainName$OtherMatch::class$ = nullptr;

		} // util
	} // security
} // sun