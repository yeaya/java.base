#include <java/security/Key.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$CompoundAttribute _Key_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Key_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Key, serialVersionUID), _Key_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _Key_MethodInfo_[] = {
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Key, getAlgorithm, $String*)},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Key, getEncoded, $bytes*)},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Key, getFormat, $String*)},
	{}
};

$ClassInfo _Key_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.Key",
	nullptr,
	"java.io.Serializable",
	_Key_FieldInfo_,
	_Key_MethodInfo_
};

$Object* allocate$Key($Class* clazz) {
	return $of($alloc(Key));
}

$Class* Key::load$($String* name, bool initialize) {
	$loadClass(Key, name, initialize, &_Key_ClassInfo_, allocate$Key);
	return class$;
}

$Class* Key::class$ = nullptr;

	} // security
} // java