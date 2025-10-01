#include <sun/util/locale/provider/AvailableLanguageTags.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$MethodInfo _AvailableLanguageTags_MethodInfo_[] = {
	{"getAvailableLanguageTags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AvailableLanguageTags_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.locale.provider.AvailableLanguageTags",
	nullptr,
	nullptr,
	nullptr,
	_AvailableLanguageTags_MethodInfo_
};

$Object* allocate$AvailableLanguageTags($Class* clazz) {
	return $of($alloc(AvailableLanguageTags));
}

$Class* AvailableLanguageTags::load$($String* name, bool initialize) {
	$loadClass(AvailableLanguageTags, name, initialize, &_AvailableLanguageTags_ClassInfo_, allocate$AvailableLanguageTags);
	return class$;
}

$Class* AvailableLanguageTags::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun