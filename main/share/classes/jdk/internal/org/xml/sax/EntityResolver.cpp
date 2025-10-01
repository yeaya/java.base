#include <jdk/internal/org/xml/sax/EntityResolver.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$MethodInfo _EntityResolver_MethodInfo_[] = {
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _EntityResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.xml.sax.EntityResolver",
	nullptr,
	nullptr,
	nullptr,
	_EntityResolver_MethodInfo_
};

$Object* allocate$EntityResolver($Class* clazz) {
	return $of($alloc(EntityResolver));
}

$Class* EntityResolver::load$($String* name, bool initialize) {
	$loadClass(EntityResolver, name, initialize, &_EntityResolver_ClassInfo_, allocate$EntityResolver);
	return class$;
}

$Class* EntityResolver::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk