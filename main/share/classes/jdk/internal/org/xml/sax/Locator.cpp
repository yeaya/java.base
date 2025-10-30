#include <jdk/internal/org/xml/sax/Locator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$MethodInfo _Locator_MethodInfo_[] = {
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Locator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.xml.sax.Locator",
	nullptr,
	nullptr,
	nullptr,
	_Locator_MethodInfo_
};

$Object* allocate$Locator($Class* clazz) {
	return $of($alloc(Locator));
}

$Class* Locator::load$($String* name, bool initialize) {
	$loadClass(Locator, name, initialize, &_Locator_ClassInfo_, allocate$Locator);
	return class$;
}

$Class* Locator::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk