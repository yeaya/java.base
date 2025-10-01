#include <jdk/internal/reflect/FieldAccessorImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/MagicAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FieldAccessor = ::jdk::internal::reflect::FieldAccessor;
using $MagicAccessorImpl = ::jdk::internal::reflect::MagicAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _FieldAccessorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getByte", "(Ljava/lang/Object;)B", nullptr, $PUBLIC | $ABSTRACT},
	{"getChar", "(Ljava/lang/Object;)C", nullptr, $PUBLIC | $ABSTRACT},
	{"getDouble", "(Ljava/lang/Object;)D", nullptr, $PUBLIC | $ABSTRACT},
	{"getFloat", "(Ljava/lang/Object;)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getShort", "(Ljava/lang/Object;)S", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FieldAccessorImpl::*)()>(&FieldAccessorImpl::init$))},
	{"set", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBoolean", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setByte", "(Ljava/lang/Object;B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setChar", "(Ljava/lang/Object;C)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setShort", "(Ljava/lang/Object;S)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setInt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLong", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFloat", "(Ljava/lang/Object;F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDouble", "(Ljava/lang/Object;D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.FieldAccessorImpl",
	"jdk.internal.reflect.MagicAccessorImpl",
	"jdk.internal.reflect.FieldAccessor",
	nullptr,
	_FieldAccessorImpl_MethodInfo_
};

$Object* allocate$FieldAccessorImpl($Class* clazz) {
	return $of($alloc(FieldAccessorImpl));
}

int32_t FieldAccessorImpl::hashCode() {
	 return this->$MagicAccessorImpl::hashCode();
}

bool FieldAccessorImpl::equals(Object$* obj) {
	 return this->$MagicAccessorImpl::equals(obj);
}

$Object* FieldAccessorImpl::clone() {
	 return this->$MagicAccessorImpl::clone();
}

$String* FieldAccessorImpl::toString() {
	 return this->$MagicAccessorImpl::toString();
}

void FieldAccessorImpl::finalize() {
	this->$MagicAccessorImpl::finalize();
}

void FieldAccessorImpl::init$() {
	$MagicAccessorImpl::init$();
}

FieldAccessorImpl::FieldAccessorImpl() {
}

$Class* FieldAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(FieldAccessorImpl, name, initialize, &_FieldAccessorImpl_ClassInfo_, allocate$FieldAccessorImpl);
	return class$;
}

$Class* FieldAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk