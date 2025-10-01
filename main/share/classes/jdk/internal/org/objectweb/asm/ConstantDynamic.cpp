#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _ConstantDynamic_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantDynamic, name)},
	{"descriptor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantDynamic, descriptor)},
	{"bootstrapMethod", "Ljdk/internal/org/objectweb/asm/Handle;", nullptr, $PRIVATE | $FINAL, $field(ConstantDynamic, bootstrapMethod)},
	{"bootstrapMethodArguments", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ConstantDynamic, bootstrapMethodArguments)},
	{}
};

$MethodInfo _ConstantDynamic_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(ConstantDynamic::*)($String*,$String*,$Handle*,$ObjectArray*)>(&ConstantDynamic::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBootstrapMethod", "()Ljdk/internal/org/objectweb/asm/Handle;", nullptr, $PUBLIC, $method(static_cast<$Handle*(ConstantDynamic::*)()>(&ConstantDynamic::getBootstrapMethod))},
	{"getBootstrapMethodArgument", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(ConstantDynamic::*)(int32_t)>(&ConstantDynamic::getBootstrapMethodArgument))},
	{"getBootstrapMethodArgumentCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantDynamic::*)()>(&ConstantDynamic::getBootstrapMethodArgumentCount))},
	{"getBootstrapMethodArgumentsUnsafe", "()[Ljava/lang/Object;", nullptr, 0, $method(static_cast<$ObjectArray*(ConstantDynamic::*)()>(&ConstantDynamic::getBootstrapMethodArgumentsUnsafe))},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantDynamic::*)()>(&ConstantDynamic::getDescriptor))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantDynamic::*)()>(&ConstantDynamic::getName))},
	{"getSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantDynamic::*)()>(&ConstantDynamic::getSize))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantDynamic_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.ConstantDynamic",
	"java.lang.Object",
	nullptr,
	_ConstantDynamic_FieldInfo_,
	_ConstantDynamic_MethodInfo_
};

$Object* allocate$ConstantDynamic($Class* clazz) {
	return $of($alloc(ConstantDynamic));
}

void ConstantDynamic::init$($String* name, $String* descriptor, $Handle* bootstrapMethod, $ObjectArray* bootstrapMethodArguments) {
	$set(this, name, name);
	$set(this, descriptor, descriptor);
	$set(this, bootstrapMethod, bootstrapMethod);
	$set(this, bootstrapMethodArguments, bootstrapMethodArguments);
}

$String* ConstantDynamic::getName() {
	return this->name;
}

$String* ConstantDynamic::getDescriptor() {
	return this->descriptor;
}

$Handle* ConstantDynamic::getBootstrapMethod() {
	return this->bootstrapMethod;
}

int32_t ConstantDynamic::getBootstrapMethodArgumentCount() {
	return $nc(this->bootstrapMethodArguments)->length;
}

$Object* ConstantDynamic::getBootstrapMethodArgument(int32_t index) {
	return $of($nc(this->bootstrapMethodArguments)->get(index));
}

$ObjectArray* ConstantDynamic::getBootstrapMethodArgumentsUnsafe() {
	return this->bootstrapMethodArguments;
}

int32_t ConstantDynamic::getSize() {
	char16_t firstCharOfDescriptor = $nc(this->descriptor)->charAt(0);
	return (firstCharOfDescriptor == u'J' || firstCharOfDescriptor == u'D') ? 2 : 1;
}

bool ConstantDynamic::equals(Object$* object) {
	if ($equals(object, this)) {
		return true;
	}
	if (!($instanceOf(ConstantDynamic, object))) {
		return false;
	}
	$var(ConstantDynamic, constantDynamic, $cast(ConstantDynamic, object));
	bool var$2 = $nc(this->name)->equals($nc(constantDynamic)->name);
	bool var$1 = var$2 && $nc(this->descriptor)->equals($nc(constantDynamic)->descriptor);
	bool var$0 = var$1 && $nc(this->bootstrapMethod)->equals($nc(constantDynamic)->bootstrapMethod);
	return var$0 && $Arrays::equals(this->bootstrapMethodArguments, $nc(constantDynamic)->bootstrapMethodArguments);
}

int32_t ConstantDynamic::hashCode() {
	int32_t var$2 = $nc(this->name)->hashCode();
	int32_t var$1 = var$2 ^ $Integer::rotateLeft($nc(this->descriptor)->hashCode(), 8);
	int32_t var$0 = var$1 ^ $Integer::rotateLeft($nc(this->bootstrapMethod)->hashCode(), 16);
	return var$0 ^ $Integer::rotateLeft($Arrays::hashCode(this->bootstrapMethodArguments), 24);
}

$String* ConstantDynamic::toString() {
	$var($String, var$0, $$str({this->name, " : "_s, this->descriptor, $$str(u' '), this->bootstrapMethod, $$str(u' ')}));
	return $concat(var$0, $($Arrays::toString(this->bootstrapMethodArguments)));
}

ConstantDynamic::ConstantDynamic() {
}

$Class* ConstantDynamic::load$($String* name, bool initialize) {
	$loadClass(ConstantDynamic, name, initialize, &_ConstantDynamic_ClassInfo_, allocate$ConstantDynamic);
	return class$;
}

$Class* ConstantDynamic::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk