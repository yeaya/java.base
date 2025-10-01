#include <java/io/Externalizable.h>

#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _Externalizable_MethodInfo_[] = {
	{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Externalizable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.Externalizable",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_Externalizable_MethodInfo_
};

$Object* allocate$Externalizable($Class* clazz) {
	return $of($alloc(Externalizable));
}

$Class* Externalizable::load$($String* name, bool initialize) {
	$loadClass(Externalizable, name, initialize, &_Externalizable_ClassInfo_, allocate$Externalizable);
	return class$;
}

$Class* Externalizable::class$ = nullptr;

	} // io
} // java