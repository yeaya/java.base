#include <java/io/ObjectStreamClass$2.h>

#include <java/io/InvalidClassException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamClass$DeserializationConstructorsCache.h>
#include <java/io/ObjectStreamClass$ExceptionInfo.h>
#include <java/io/ObjectStreamClass.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

#undef NO_FIELDS
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $InvalidClassException = ::java::io::InvalidClassException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamClass$DeserializationConstructorsCache = ::java::io::ObjectStreamClass$DeserializationConstructorsCache;
using $ObjectStreamClass$ExceptionInfo = ::java::io::ObjectStreamClass$ExceptionInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$2_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectStreamClass;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectStreamClass$2, this$0)},
	{"val$cl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectStreamClass$2, val$cl)},
	{}
};

$MethodInfo _ObjectStreamClass$2_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectStreamClass;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$2::*)($ObjectStreamClass*,$Class*)>(&ObjectStreamClass$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ObjectStreamClass$2_EnclosingMethodInfo_ = {
	"java.io.ObjectStreamClass",
	"<init>",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _ObjectStreamClass$2_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectStreamClass$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ObjectStreamClass$2_FieldInfo_,
	_ObjectStreamClass$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ObjectStreamClass$2_EnclosingMethodInfo_,
	_ObjectStreamClass$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$2($Class* clazz) {
	return $of($alloc(ObjectStreamClass$2));
}

void ObjectStreamClass$2::init$($ObjectStreamClass* this$0, $Class* val$cl) {
	$set(this, this$0, this$0);
	$set(this, val$cl, val$cl);
}

$Object* ObjectStreamClass$2::run() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isEnum$) {
		$set(this->this$0, suid, $Long::valueOf((int64_t)0));
		$init($ObjectStreamClass);
		$set(this->this$0, fields, $ObjectStreamClass::NO_FIELDS);
		return $of(nullptr);
	}
	if ($nc(this->val$cl)->isArray()) {
		$init($ObjectStreamClass);
		$set(this->this$0, fields, $ObjectStreamClass::NO_FIELDS);
		return $of(nullptr);
	}
	$set(this->this$0, suid, $ObjectStreamClass::getDeclaredSUID(this->val$cl));
	try {
		$set(this->this$0, fields, $ObjectStreamClass::getSerialFields(this->val$cl));
		this->this$0->computeFieldOffsets();
	} catch ($InvalidClassException&) {
		$var($InvalidClassException, e, $catch());
		$set(this->this$0, serializeEx, ($assignField(this->this$0, deserializeEx, $new($ObjectStreamClass$ExceptionInfo, e->classname, $(e->getMessage())))));
		$set(this->this$0, fields, $ObjectStreamClass::NO_FIELDS);
	}
	if (this->this$0->isRecord$) {
		$set(this->this$0, canonicalCtr, $ObjectStreamClass::canonicalRecordCtr(this->val$cl));
		$set(this->this$0, deserializationCtrs, $new($ObjectStreamClass$DeserializationConstructorsCache));
	} else if (this->this$0->externalizable) {
		$set(this->this$0, cons, $ObjectStreamClass::getExternalizableConstructor(this->val$cl));
	} else {
		$set(this->this$0, cons, $ObjectStreamClass::getSerializableConstructor(this->val$cl));
		$load($ObjectOutputStream);
		$init($Void);
		$set(this->this$0, writeObjectMethod, $ObjectStreamClass::getPrivateMethod(this->val$cl, "writeObject"_s, $$new($ClassArray, {$ObjectOutputStream::class$}), $Void::TYPE));
		$load($ObjectInputStream);
		$set(this->this$0, readObjectMethod, $ObjectStreamClass::getPrivateMethod(this->val$cl, "readObject"_s, $$new($ClassArray, {$ObjectInputStream::class$}), $Void::TYPE));
		$set(this->this$0, readObjectNoDataMethod, $ObjectStreamClass::getPrivateMethod(this->val$cl, "readObjectNoData"_s, nullptr, $Void::TYPE));
		this->this$0->hasWriteObjectData$ = (this->this$0->writeObjectMethod != nullptr);
	}
	$set(this->this$0, domains, this->this$0->getProtectionDomains(this->this$0->cons, this->val$cl));
	$load($Object);
	$set(this->this$0, writeReplaceMethod, $ObjectStreamClass::getInheritableMethod(this->val$cl, "writeReplace"_s, nullptr, $Object::class$));
	$set(this->this$0, readResolveMethod, $ObjectStreamClass::getInheritableMethod(this->val$cl, "readResolve"_s, nullptr, $Object::class$));
	return $of(nullptr);
}

ObjectStreamClass$2::ObjectStreamClass$2() {
}

$Class* ObjectStreamClass$2::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$2, name, initialize, &_ObjectStreamClass$2_ClassInfo_, allocate$ObjectStreamClass$2);
	return class$;
}

$Class* ObjectStreamClass$2::class$ = nullptr;

	} // io
} // java