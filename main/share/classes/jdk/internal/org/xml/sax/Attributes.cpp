#include <jdk/internal/org/xml/sax/Attributes.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$MethodInfo _Attributes_MethodInfo_[] = {
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Attributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.xml.sax.Attributes",
	nullptr,
	nullptr,
	nullptr,
	_Attributes_MethodInfo_
};

$Object* allocate$Attributes($Class* clazz) {
	return $of($alloc(Attributes));
}

$Class* Attributes::load$($String* name, bool initialize) {
	$loadClass(Attributes, name, initialize, &_Attributes_ClassInfo_, allocate$Attributes);
	return class$;
}

$Class* Attributes::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk