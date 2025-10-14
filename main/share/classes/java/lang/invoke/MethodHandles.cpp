#include <java/lang/invoke/MethodHandles.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Iterable.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/invoke/BootstrapMethodInvoker.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/Invokers.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MemberName$Factory.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$ArrayAccess.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$1.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/lang/invoke/WrongMethodTypeException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ReflectPermission.h>
#include <java/nio/ByteOrder.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/BitSet.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/invoke/util/ValueConversions.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef ACCESS_PERMISSION
#undef BIG_ENDIAN
#undef BIT_LIMIT
#undef COUNT
#undef DEFAULT_NAME
#undef FULL_POWER_MODES
#undef GET
#undef IDENTITY
#undef IDENTITY_MHS
#undef IMPL_LOOKUP
#undef IMPL_NAMES
#undef LENGTH
#undef MH_RECEIVER_OFFSET
#undef MODULE
#undef OBJECT
#undef ORIGINAL
#undef PRIVATE
#undef PUBLIC_LOOKUP
#undef SET
#undef TRUSTED
#undef TYPE
#undef V_TYPE
#undef ZERO
#undef ZERO_MHS

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ListArray = $Array<::java::util::List>;
using $MethodHandleArray2 = $Array<::java::lang::invoke::MethodHandle, 2>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $BootstrapMethodInvoker = ::java::lang::invoke::BootstrapMethodInvoker;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $CallSite = ::java::lang::invoke::CallSite;
using $Invokers = ::java::lang::invoke::Invokers;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MemberName = ::java::lang::invoke::MemberName;
using $MemberName$Factory = ::java::lang::invoke::MemberName$Factory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$ArrayAccess = ::java::lang::invoke::MethodHandleImpl$ArrayAccess;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodHandleInfo = ::java::lang::invoke::MethodHandleInfo;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$1 = ::java::lang::invoke::MethodHandles$1;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $WrongMethodTypeException = ::java::lang::invoke::WrongMethodTypeException;
using $Member = ::java::lang::reflect::Member;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;
using $ByteOrder = ::java::nio::ByteOrder;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $BitSet = ::java::util::BitSet;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $ValueConversions = ::sun::invoke::util::ValueConversions;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandles$$Lambda$lambda$loop$0 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loop$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* c) override {
		 return MethodHandles::lambda$loop$0($cast($MethodHandleArray, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loop$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$lambda$loop$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loop$0::*)()>(&MethodHandles$$Lambda$lambda$loop$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loop$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loop$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loop$0::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loop$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loop$0::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loop$1$1 : public $Consumer {
	$class(MethodHandles$$Lambda$lambda$loop$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($List* init, $List* step, $List* pred, $List* fini) {
		$set(this, init, init);
		$set(this, step, step);
		$set(this, pred, pred);
		$set(this, fini, fini);
	}
	virtual void accept(Object$* clause) override {
		MethodHandles::lambda$loop$1(init, step, pred, fini, $cast($MethodHandleArray, clause));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loop$1$1>());
	}
	$List* init = nullptr;
	$List* step = nullptr;
	$List* pred = nullptr;
	$List* fini = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MethodHandles$$Lambda$lambda$loop$1$1::fieldInfos[5] = {
	{"init", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loop$1$1, init)},
	{"step", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loop$1$1, step)},
	{"pred", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loop$1$1, pred)},
	{"fini", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loop$1$1, fini)},
	{}
};
$MethodInfo MethodHandles$$Lambda$lambda$loop$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loop$1$1::*)($List*,$List*,$List*,$List*)>(&MethodHandles$$Lambda$lambda$loop$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loop$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loop$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loop$1$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loop$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loop$1$1::class$ = nullptr;

class MethodHandles$$Lambda$size$2 : public $Function {
	$class(MethodHandles$$Lambda$size$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($List, inst$)->size());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$size$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$size$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$size$2::*)()>(&MethodHandles$$Lambda$size$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$size$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$size$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$size$2::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$size$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$size$2::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loop$2$3 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loop$2$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return MethodHandles::lambda$loop$2($cast($Class, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loop$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$lambda$loop$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loop$2$3::*)()>(&MethodHandles$$Lambda$lambda$loop$2$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loop$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loop$2$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loop$2$3::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loop$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loop$2$3::class$ = nullptr;

class MethodHandles$$Lambda$nonNull$4 : public $Predicate {
	$class(MethodHandles$$Lambda$nonNull$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* obj) override {
		 return $Objects::nonNull(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$nonNull$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$nonNull$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$nonNull$4::*)()>(&MethodHandles$$Lambda$nonNull$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$nonNull$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$nonNull$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$nonNull$4::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$nonNull$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$nonNull$4::class$ = nullptr;

class MethodHandles$$Lambda$type$5 : public $Function {
	$class(MethodHandles$$Lambda$type$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($MethodHandle, inst$)->type());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$type$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$type$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$type$5::*)()>(&MethodHandles$$Lambda$type$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$type$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$type$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$type$5::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$type$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$type$5::class$ = nullptr;

class MethodHandles$$Lambda$returnType$6 : public $Function {
	$class(MethodHandles$$Lambda$returnType$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($MethodType, inst$)->returnType());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$returnType$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$returnType$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$returnType$6::*)()>(&MethodHandles$$Lambda$returnType$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$returnType$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$returnType$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$returnType$6::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$returnType$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$returnType$6::class$ = nullptr;

class MethodHandles$$Lambda$parameterList$7 : public $Function {
	$class(MethodHandles$$Lambda$parameterList$7, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($MethodType, inst$)->parameterList());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$parameterList$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$parameterList$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$parameterList$7::*)()>(&MethodHandles$$Lambda$parameterList$7::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$parameterList$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$parameterList$7",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$parameterList$7::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$parameterList$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$parameterList$7::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loop$3$8 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loop$3$8, $NO_CLASS_INIT, $Predicate)
public:
	void init$($List* commonSuffix) {
		$set(this, commonSuffix, commonSuffix);
	}
	virtual bool test(Object$* pl) override {
		 return MethodHandles::lambda$loop$3(commonSuffix, $cast($List, pl));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loop$3$8>());
	}
	$List* commonSuffix = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MethodHandles$$Lambda$lambda$loop$3$8::fieldInfos[2] = {
	{"commonSuffix", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loop$3$8, commonSuffix)},
	{}
};
$MethodInfo MethodHandles$$Lambda$lambda$loop$3$8::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loop$3$8::*)($List*)>(&MethodHandles$$Lambda$lambda$loop$3$8::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loop$3$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loop$3$8",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loop$3$8::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loop$3$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loop$3$8::class$ = nullptr;

class MethodHandles$$Lambda$stream$9 : public $Function {
	$class(MethodHandles$$Lambda$stream$9, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$stream$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$stream$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$stream$9::*)()>(&MethodHandles$$Lambda$stream$9::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$stream$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$stream$9",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$stream$9::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$stream$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$stream$9::class$ = nullptr;

class MethodHandles$$Lambda$isNull$10 : public $Predicate {
	$class(MethodHandles$$Lambda$isNull$10, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* obj) override {
		 return $Objects::isNull(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$isNull$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$isNull$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$isNull$10::*)()>(&MethodHandles$$Lambda$isNull$10::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$isNull$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$isNull$10",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$isNull$10::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$isNull$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$isNull$10::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loopChecks0$5$11 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loopChecks0$5$11, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* c) override {
		 return MethodHandles::lambda$loopChecks0$5($cast($MethodHandleArray, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loopChecks0$5$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$lambda$loopChecks0$5$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loopChecks0$5$11::*)()>(&MethodHandles$$Lambda$lambda$loopChecks0$5$11::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loopChecks0$5$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loopChecks0$5$11",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loopChecks0$5$11::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loopChecks0$5$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loopChecks0$5$11::class$ = nullptr;

class MethodHandles$$Lambda$lambda$longestParameterList$6$12 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$longestParameterList$6$12, $NO_CLASS_INIT, $Predicate)
public:
	void init$(int32_t skipSize) {
		this->skipSize = skipSize;
	}
	virtual bool test(Object$* t) override {
		 return MethodHandles::lambda$longestParameterList$6(skipSize, $cast($MethodType, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$longestParameterList$6$12>());
	}
	int32_t skipSize = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MethodHandles$$Lambda$lambda$longestParameterList$6$12::fieldInfos[2] = {
	{"skipSize", "I", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$longestParameterList$6$12, skipSize)},
	{}
};
$MethodInfo MethodHandles$$Lambda$lambda$longestParameterList$6$12::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$longestParameterList$6$12::*)(int32_t)>(&MethodHandles$$Lambda$lambda$longestParameterList$6$12::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$longestParameterList$6$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$longestParameterList$6$12",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$longestParameterList$6$12::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$longestParameterList$6$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$longestParameterList$6$12::class$ = nullptr;

class MethodHandles$$Lambda$lambda$longestParameterList$7$13 : public $BinaryOperator {
	$class(MethodHandles$$Lambda$lambda$longestParameterList$7$13, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* p, Object$* q) override {
		 return $of(MethodHandles::lambda$longestParameterList$7($cast($List, p), $cast($List, q)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$longestParameterList$7$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$lambda$longestParameterList$7$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$longestParameterList$7$13::*)()>(&MethodHandles$$Lambda$lambda$longestParameterList$7$13::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$longestParameterList$7$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$longestParameterList$7$13",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$longestParameterList$7$13::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$longestParameterList$7$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$longestParameterList$7$13::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loopChecks1b$9$14 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loopChecks1b$9$14, $NO_CLASS_INIT, $Predicate)
public:
	void init$($List* commonSuffix) {
		$set(this, commonSuffix, commonSuffix);
	}
	virtual bool test(Object$* t) override {
		 return MethodHandles::lambda$loopChecks1b$9(commonSuffix, $cast($MethodType, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loopChecks1b$9$14>());
	}
	$List* commonSuffix = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MethodHandles$$Lambda$lambda$loopChecks1b$9$14::fieldInfos[2] = {
	{"commonSuffix", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loopChecks1b$9$14, commonSuffix)},
	{}
};
$MethodInfo MethodHandles$$Lambda$lambda$loopChecks1b$9$14::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loopChecks1b$9$14::*)($List*)>(&MethodHandles$$Lambda$lambda$loopChecks1b$9$14::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loopChecks1b$9$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loopChecks1b$9$14",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loopChecks1b$9$14::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loopChecks1b$9$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loopChecks1b$9$14::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loopChecks1cd$10$15 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loopChecks1cd$10$15, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* loopReturnType) {
		this->loopReturnType = loopReturnType;
	}
	virtual bool test(Object$* t) override {
		 return MethodHandles::lambda$loopChecks1cd$10(loopReturnType, $cast($Class, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loopChecks1cd$10$15>());
	}
	$Class* loopReturnType = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::fieldInfos[2] = {
	{"loopReturnType", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$loopChecks1cd$10$15, loopReturnType)},
	{}
};
$MethodInfo MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::*)($Class*)>(&MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loopChecks1cd$10$15",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loopChecks1cd$10$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::class$ = nullptr;

class MethodHandles$$Lambda$lambda$loopChecks1cd$11$16 : public $Predicate {
	$class(MethodHandles$$Lambda$lambda$loopChecks1cd$11$16, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* t) override {
		 return MethodHandles::lambda$loopChecks1cd$11($cast($Class, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$loopChecks1cd$11$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::*)()>(&MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$loopChecks1cd$11$16",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$loopChecks1cd$11$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::class$ = nullptr;

class MethodHandles$$Lambda$lambda$fillParameterTypes$13$17 : public $Function {
	$class(MethodHandles$$Lambda$lambda$fillParameterTypes$13$17, $NO_CLASS_INIT, $Function)
public:
	void init$($List* targetParams) {
		$set(this, targetParams, targetParams);
	}
	virtual $Object* apply(Object$* h) override {
		 return $of(MethodHandles::lambda$fillParameterTypes$13(targetParams, $cast($MethodHandle, h)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$lambda$fillParameterTypes$13$17>());
	}
	$List* targetParams = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::fieldInfos[2] = {
	{"targetParams", "Ljava/util/List;", nullptr, $PUBLIC, $field(MethodHandles$$Lambda$lambda$fillParameterTypes$13$17, targetParams)},
	{}
};
$MethodInfo MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::*)($List*)>(&MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$lambda$fillParameterTypes$13$17",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$lambda$fillParameterTypes$13$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::class$ = nullptr;

class MethodHandles$$Lambda$asFixedArity$18 : public $Function {
	$class(MethodHandles$$Lambda$asFixedArity$18, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($MethodHandle, inst$)->asFixedArity());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodHandles$$Lambda$asFixedArity$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodHandles$$Lambda$asFixedArity$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodHandles$$Lambda$asFixedArity$18::*)()>(&MethodHandles$$Lambda$asFixedArity$18::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodHandles$$Lambda$asFixedArity$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.MethodHandles$$Lambda$asFixedArity$18",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodHandles$$Lambda$asFixedArity$18::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$$Lambda$asFixedArity$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodHandles$$Lambda$asFixedArity$18::class$ = nullptr;

$CompoundAttribute _MethodHandles_MethodAnnotations_lookup72[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MethodHandles_MethodAnnotations_reflected$lookup87[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$FieldInfo _MethodHandles_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandles, $assertionsDisabled)},
	{"IMPL_NAMES", "Ljava/lang/invoke/MemberName$Factory;", nullptr, $STATIC | $FINAL, $staticField(MethodHandles, IMPL_NAMES)},
	{"ACCESS_PERMISSION", "Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandles, ACCESS_PERMISSION)},
	{"IDENTITY_MHS", "[Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandles, IDENTITY_MHS)},
	{"ZERO_MHS", "[Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodHandles, ZERO_MHS)},
	{}
};

$MethodInfo _MethodHandles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodHandles::*)()>(&MethodHandles::init$))},
	{"argumentsWithCombiner", "(ZLjava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;[I)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)(bool,$MethodHandle*,int32_t,$MethodHandle*,$ints*)>(&MethodHandles::argumentsWithCombiner))},
	{"argumentsWithCombinerChecks", "(IZLjava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[I)Ljava/lang/Class;", "(IZLjava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[I)Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$Class*(*)(int32_t,bool,$MethodType*,$MethodType*,$ints*)>(&MethodHandles::argumentsWithCombinerChecks))},
	{"arrayConstructor", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::arrayConstructor)), "java.lang.IllegalArgumentException"},
	{"arrayElementGetter", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::arrayElementGetter)), "java.lang.IllegalArgumentException"},
	{"arrayElementSetter", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::arrayElementSetter)), "java.lang.IllegalArgumentException"},
	{"arrayElementVarHandle", "(Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $STATIC, $method(static_cast<$VarHandle*(*)($Class*)>(&MethodHandles::arrayElementVarHandle)), "java.lang.IllegalArgumentException"},
	{"arrayLength", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::arrayLength)), "java.lang.IllegalArgumentException"},
	{"basicInvoker", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($MethodType*)>(&MethodHandles::basicInvoker))},
	{"buildCommonSuffix", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;I)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;I)Ljava/util/List<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*,$List*,$List*,$List*,int32_t)>(&MethodHandles::buildCommonSuffix))},
	{"byteArrayViewVarHandle", "(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/Class<*>;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $STATIC, $method(static_cast<$VarHandle*(*)($Class*,$ByteOrder*)>(&MethodHandles::byteArrayViewVarHandle)), "java.lang.IllegalArgumentException"},
	{"byteBufferViewVarHandle", "(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/Class<*>;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $STATIC, $method(static_cast<$VarHandle*(*)($Class*,$ByteOrder*)>(&MethodHandles::byteBufferViewVarHandle)), "java.lang.IllegalArgumentException"},
	{"catchException", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class<+Ljava/lang/Throwable;>;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$Class*,$MethodHandle*)>(&MethodHandles::catchException))},
	{"classData", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$Class*)>(&MethodHandles::classData)), "java.lang.IllegalAccessException"},
	{"classDataAt", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;I)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class<TT;>;I)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$Class*,int32_t)>(&MethodHandles::classDataAt)), "java.lang.IllegalAccessException"},
	{"collectArguments", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$MethodHandle*)>(&MethodHandles::collectArguments))},
	{"collectArgumentsChecks", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodType*(*)($MethodHandle*,int32_t,$MethodHandle*)>(&MethodHandles::collectArgumentsChecks)), "java.lang.RuntimeException"},
	{"collectReturnValue", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*)>(&MethodHandles::collectReturnValue))},
	{"constant", "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*,Object$*)>(&MethodHandles::constant))},
	{"copyTypes", "([Ljava/lang/Object;)Ljava/util/List;", "([Ljava/lang/Object;)Ljava/util/List<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($ObjectArray*)>(&MethodHandles::copyTypes))},
	{"countedLoop", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::countedLoop))},
	{"countedLoop", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::countedLoop))},
	{"countedLoopChecks", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandle*,$MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::countedLoopChecks))},
	{"doWhileLoop", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::doWhileLoop))},
	{"dropArgumentChecks", "(Ljava/lang/invoke/MethodType;ILjava/util/List;)I", "(Ljava/lang/invoke/MethodType;ILjava/util/List<Ljava/lang/Class<*>;>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($MethodType*,int32_t,$List*)>(&MethodHandles::dropArgumentChecks))},
	{"dropArguments", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List<Ljava/lang/Class<*>;>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$List*)>(&MethodHandles::dropArguments))},
	{"dropArguments", "(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$ClassArray*)>(&MethodHandles::dropArguments))},
	{"dropArguments0", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List<Ljava/lang/Class<*>;>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$List*)>(&MethodHandles::dropArguments0))},
	{"dropArgumentsToMatch", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List;IZ)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List<Ljava/lang/Class<*>;>;IZ)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$List*,int32_t,bool)>(&MethodHandles::dropArgumentsToMatch))},
	{"dropArgumentsToMatch", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List;I)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;ILjava/util/List<Ljava/lang/Class<*>;>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$List*,int32_t)>(&MethodHandles::dropArgumentsToMatch))},
	{"dropReturn", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*)>(&MethodHandles::dropReturn))},
	{"empty", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodType*)>(&MethodHandles::empty))},
	{"exactInvoker", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodType*)>(&MethodHandles::exactInvoker))},
	{"explicitCastArguments", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodType*)>(&MethodHandles::explicitCastArguments))},
	{"explicitCastArgumentsChecks", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandle*,$MethodType*)>(&MethodHandles::explicitCastArgumentsChecks))},
	{"fillParameterTypes", "(Ljava/util/List;Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/Class<*>;>;)Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*,$List*)>(&MethodHandles::fillParameterTypes))},
	{"filterArgument", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$MethodHandle*)>(&MethodHandles::filterArgument))},
	{"filterArgumentChecks", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandle*,int32_t,$MethodHandle*)>(&MethodHandles::filterArgumentChecks)), "java.lang.RuntimeException"},
	{"filterArguments", "(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$MethodHandleArray*)>(&MethodHandles::filterArguments))},
	{"filterArgumentsCheckArity", "(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandle*,int32_t,$MethodHandleArray*)>(&MethodHandles::filterArgumentsCheckArity))},
	{"filterArgumentsWithCombiner", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;[I)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$MethodHandle*,$ints*)>(&MethodHandles::filterArgumentsWithCombiner))},
	{"filterRepeatedArgument", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;[I)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$ints*)>(&MethodHandles::filterRepeatedArgument))},
	{"filterReturnValue", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*)>(&MethodHandles::filterReturnValue))},
	{"filterReturnValueChecks", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodType*,$MethodType*)>(&MethodHandles::filterReturnValueChecks)), "java.lang.RuntimeException"},
	{"findFirstDupOrDrop", "([II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t)>(&MethodHandles::findFirstDupOrDrop))},
	{"fixArities", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;)Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*)>(&MethodHandles::fixArities))},
	{"foldArgumentChecks", "(ILjava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)Ljava/lang/Class;", "(ILjava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)(int32_t,$MethodType*,$MethodType*)>(&MethodHandles::foldArgumentChecks))},
	{"foldArguments", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*)>(&MethodHandles::foldArguments))},
	{"foldArguments", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$MethodHandle*)>(&MethodHandles::foldArguments))},
	{"foldArgumentsWithCombiner", "(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;[I)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$MethodHandle*,$ints*)>(&MethodHandles::foldArgumentsWithCombiner))},
	{"guardWithTest", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::guardWithTest))},
	{"identity", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::identity))},
	{"identityOrVoid", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::identityOrVoid))},
	{"insertArgumentPrimitive", "(Ljava/lang/invoke/BoundMethodHandle;ILjava/lang/Class;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", "(Ljava/lang/invoke/BoundMethodHandle;ILjava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$BoundMethodHandle*(*)($BoundMethodHandle*,int32_t,$Class*,Object$*)>(&MethodHandles::insertArgumentPrimitive))},
	{"insertArguments", "(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,$ObjectArray*)>(&MethodHandles::insertArguments))},
	{"insertArgumentsChecks", "(Ljava/lang/invoke/MethodHandle;II)[Ljava/lang/Class;", "(Ljava/lang/invoke/MethodHandle;II)[Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$ClassArray*(*)($MethodHandle*,int32_t,int32_t)>(&MethodHandles::insertArgumentsChecks)), "java.lang.RuntimeException"},
	{"invoker", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodType*)>(&MethodHandles::invoker))},
	{"iteratedLoop", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::iteratedLoop))},
	{"iteratedLoopChecks", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/Class;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::iteratedLoopChecks))},
	{"lambda$fillParameterTypes$13", "(Ljava/util/List;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandle*(*)($List*,$MethodHandle*)>(&MethodHandles::lambda$fillParameterTypes$13))},
	{"lambda$longestParameterList$6", "(ILjava/lang/invoke/MethodType;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t,$MethodType*)>(&MethodHandles::lambda$longestParameterList$6))},
	{"lambda$longestParameterList$7", "(Ljava/util/List;Ljava/util/List;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($List*,$List*)>(&MethodHandles::lambda$longestParameterList$7))},
	{"lambda$loop$0", "([Ljava/lang/invoke/MethodHandle;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($MethodHandleArray*)>(&MethodHandles::lambda$loop$0))},
	{"lambda$loop$1", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;[Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,$List*,$List*,$List*,$MethodHandleArray*)>(&MethodHandles::lambda$loop$1))},
	{"lambda$loop$2", "(Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*)>(&MethodHandles::lambda$loop$2))},
	{"lambda$loop$3", "(Ljava/util/List;Ljava/util/List;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($List*,$List*)>(&MethodHandles::lambda$loop$3))},
	{"lambda$loopChecks0$5", "([Ljava/lang/invoke/MethodHandle;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($MethodHandleArray*)>(&MethodHandles::lambda$loopChecks0$5))},
	{"lambda$loopChecks1b$9", "(Ljava/util/List;Ljava/lang/invoke/MethodType;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($List*,$MethodType*)>(&MethodHandles::lambda$loopChecks1b$9))},
	{"lambda$loopChecks1cd$10", "(Ljava/lang/Class;Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*,$Class*)>(&MethodHandles::lambda$loopChecks1cd$10))},
	{"lambda$loopChecks1cd$11", "(Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*)>(&MethodHandles::lambda$loopChecks1cd$11))},
	{"longestParameterList", "(Ljava/util/stream/Stream;I)Ljava/util/List;", "(Ljava/util/stream/Stream<Ljava/lang/invoke/MethodHandle;>;I)Ljava/util/List<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Stream*,int32_t)>(&MethodHandles::longestParameterList))},
	{"longestParameterList", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljava/util/List<Ljava/lang/Class<*>;>;>;)Ljava/util/List<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*)>(&MethodHandles::longestParameterList))},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&MethodHandles::lookup)), nullptr, nullptr, _MethodHandles_MethodAnnotations_lookup72},
	{"loop", "([[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandleArray2*)>(&MethodHandles::loop))},
	{"loopChecks0", "([[Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandleArray2*)>(&MethodHandles::loopChecks0))},
	{"loopChecks1a", "(ILjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$MethodHandle*,$MethodHandle*)>(&MethodHandles::loopChecks1a))},
	{"loopChecks1b", "(Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/Class<*>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$List*)>(&MethodHandles::loopChecks1b))},
	{"loopChecks1cd", "(Ljava/util/List;Ljava/util/List;Ljava/lang/Class;)V", "(Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$List*,$Class*)>(&MethodHandles::loopChecks1cd))},
	{"loopChecks2", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/invoke/MethodHandle;>;Ljava/util/List<Ljava/lang/Class<*>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$List*,$List*,$List*)>(&MethodHandles::loopChecks2))},
	{"makeIdentity", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::makeIdentity))},
	{"makeZero", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::makeZero))},
	{"misMatchedTypes", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/RuntimeException;", "<T:Ljava/lang/Object;>(Ljava/lang/String;TT;TT;)Ljava/lang/RuntimeException;", $STATIC, $method(static_cast<$RuntimeException*(*)($String*,Object$*,Object$*)>(&MethodHandles::misMatchedTypes))},
	{"permuteArgumentChecks", "([ILjava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($ints*,$MethodType*,$MethodType*)>(&MethodHandles::permuteArgumentChecks))},
	{"permuteArguments", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;[I)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodType*,$ints*)>(&MethodHandles::permuteArguments))},
	{"privateLookupIn", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandles$Lookup;", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandles$Lookup;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)($Class*,$MethodHandles$Lookup*)>(&MethodHandles::privateLookupIn)), "java.lang.IllegalAccessException"},
	{"publicLookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&MethodHandles::publicLookup))},
	{"reflectAs", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/reflect/Member;", "<T::Ljava/lang/reflect/Member;>(Ljava/lang/Class<TT;>;Ljava/lang/invoke/MethodHandle;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Member*(*)($Class*,$MethodHandle*)>(&MethodHandles::reflectAs))},
	{"reflected$lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&MethodHandles::reflected$lookup)), nullptr, nullptr, _MethodHandles_MethodAnnotations_reflected$lookup87},
	{"setCachedMethodHandle", "([Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$MethodHandle*(*)($MethodHandleArray*,int32_t,$MethodHandle*)>(&MethodHandles::setCachedMethodHandle))},
	{"spreadInvoker", "(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodType*,int32_t)>(&MethodHandles::spreadInvoker))},
	{"swapArguments", "(Ljava/lang/invoke/MethodHandle;II)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,int32_t,int32_t)>(&MethodHandles::swapArguments))},
	{"tableSwitch", "(Ljava/lang/invoke/MethodHandle;[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandleArray*)>(&MethodHandles::tableSwitch))},
	{"tableSwitchChecks", "(Ljava/lang/invoke/MethodHandle;[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MethodType*(*)($MethodHandle*,$MethodHandleArray*)>(&MethodHandles::tableSwitchChecks))},
	{"throwException", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;Ljava/lang/Class<+Ljava/lang/Throwable;>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*,$Class*)>(&MethodHandles::throwException))},
	{"tryFinally", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*)>(&MethodHandles::tryFinally))},
	{"tryFinallyChecks", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandle*,$MethodHandle*)>(&MethodHandles::tryFinallyChecks))},
	{"varHandleExactInvoker", "(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($VarHandle$AccessMode*,$MethodType*)>(&MethodHandles::varHandleExactInvoker))},
	{"varHandleInvoker", "(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($VarHandle$AccessMode*,$MethodType*)>(&MethodHandles::varHandleInvoker))},
	{"whileLoop", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::whileLoop))},
	{"whileLoopChecks", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodHandle*,$MethodHandle*,$MethodHandle*)>(&MethodHandles::whileLoopChecks))},
	{"zero", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)($Class*)>(&MethodHandles::zero))},
	{"zero", "(Lsun/invoke/util/Wrapper;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Lsun/invoke/util/Wrapper;Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $method(static_cast<$MethodHandle*(*)($Wrapper*,$Class*)>(&MethodHandles::zero))},
	{}
};

$InnerClassInfo _MethodHandles_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandles$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodHandles_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.MethodHandles",
	"java.lang.Object",
	nullptr,
	_MethodHandles_FieldInfo_,
	_MethodHandles_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandles_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandles$1,java.lang.invoke.MethodHandles$Lookup,java.lang.invoke.MethodHandles$Lookup$ClassDefiner,java.lang.invoke.MethodHandles$Lookup$ClassFile,java.lang.invoke.MethodHandles$Lookup$ClassOption"
};

$Object* allocate$MethodHandles($Class* clazz) {
	return $of($alloc(MethodHandles));
}

bool MethodHandles::$assertionsDisabled = false;
$MemberName$Factory* MethodHandles::IMPL_NAMES = nullptr;
$Permission* MethodHandles::ACCESS_PERMISSION = nullptr;
$MethodHandleArray* MethodHandles::IDENTITY_MHS = nullptr;
$MethodHandleArray* MethodHandles::ZERO_MHS = nullptr;

void MethodHandles::init$() {
}

$MethodHandles$Lookup* MethodHandles::lookup() {
	$init(MethodHandles);
	return $new($MethodHandles$Lookup, $Reflection::getCallerClass());
}

$MethodHandles$Lookup* MethodHandles::reflected$lookup() {
	$init(MethodHandles);
	$Class* caller = $Reflection::getCallerClass();
	if ($nc(caller)->getClassLoader() == nullptr) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"illegal lookupClass: "_s, caller}))));
	}
	return $new($MethodHandles$Lookup, caller);
}

$MethodHandles$Lookup* MethodHandles::publicLookup() {
	$init(MethodHandles);
	$init($MethodHandles$Lookup);
	return $MethodHandles$Lookup::PUBLIC_LOOKUP;
}

$MethodHandles$Lookup* MethodHandles::privateLookupIn($Class* targetClass, $MethodHandles$Lookup* caller) {
	$init(MethodHandles);
	if ($nc(caller)->allowedModes == $MethodHandles$Lookup::TRUSTED) {
		return $new($MethodHandles$Lookup, targetClass);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(MethodHandles::ACCESS_PERMISSION);
	}
	if ($nc(targetClass)->isPrimitive()) {
		$throwNew($IllegalArgumentException, $$str({targetClass, " is a primitive class"_s}));
	}
	if ($nc(targetClass)->isArray()) {
		$throwNew($IllegalArgumentException, $$str({targetClass, " is an array class"_s}));
	}
	int32_t requireAccess = $MethodHandles$Lookup::PRIVATE | $MethodHandles$Lookup::MODULE;
	if (((int32_t)($nc(caller)->lookupModes() & (uint32_t)requireAccess)) != requireAccess) {
		$throwNew($IllegalAccessException, "caller does not have PRIVATE and MODULE lookup mode"_s);
	}
	if (!MethodHandles::$assertionsDisabled && !($nc(caller)->previousLookupClass() == nullptr)) {
		$throwNew($AssertionError);
	}
	$Class* callerClass = $nc(caller)->lookupClass();
	$var($Module, callerModule, $nc(callerClass)->getModule());
	$var($Module, targetModule, $nc(targetClass)->getModule());
	$Class* newPreviousClass = nullptr;
	int32_t newModes = (int32_t)($MethodHandles$Lookup::FULL_POWER_MODES & (uint32_t)~$MethodHandles$Lookup::ORIGINAL);
	if (targetModule != callerModule) {
		if (!$nc(callerModule)->canRead(targetModule)) {
			$throwNew($IllegalAccessException, $$str({callerModule, " does not read "_s, targetModule}));
		}
		if ($nc(targetModule)->isNamed()) {
			$var($String, pn, targetClass->getPackageName());
			if (!MethodHandles::$assertionsDisabled && ! !$nc(pn)->isEmpty()) {
				$throwNew($AssertionError, $of("unnamed package cannot be in named module"_s));
			}
			if (!targetModule->isOpen(pn, callerModule)) {
				$throwNew($IllegalAccessException, $$str({targetModule, " does not open "_s, pn, " to "_s, callerModule}));
			}
		}
		newPreviousClass = callerClass;
		newModes &= (uint32_t)~$MethodHandles$Lookup::MODULE;
	}
	return $MethodHandles$Lookup::newLookup(targetClass, newPreviousClass, newModes);
}

$Object* MethodHandles::classData($MethodHandles$Lookup* caller, $String* name, $Class* type) {
	$init(MethodHandles);
	$Objects::requireNonNull(caller);
	$Objects::requireNonNull(type);
	$init($ConstantDescs);
	if (!$nc($ConstantDescs::DEFAULT_NAME)->equals(name)) {
		$throwNew($IllegalArgumentException, $$str({"name must be \"_\": "_s, name}));
	}
	if (((int32_t)(caller->lookupModes() & (uint32_t)$MethodHandles$Lookup::ORIGINAL)) != $MethodHandles$Lookup::ORIGINAL) {
		$throwNew($IllegalAccessException, $$str({caller, " does not have ORIGINAL access"_s}));
	}
	$var($Object, classdata, $MethodHandleNatives::classData(caller->lookupClass()));
	if (classdata == nullptr) {
		return $of(nullptr);
	}
	try {
		return $of($BootstrapMethodInvoker::widenAndCast(classdata, type));
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		$throw(e);
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		$throw(e);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

$Object* MethodHandles::classDataAt($MethodHandles$Lookup* caller, $String* name, $Class* type, int32_t index) {
	$init(MethodHandles);
	$load($List);
	$var($List, classdata, $cast($List, classData(caller, name, $List::class$)));
	if (classdata == nullptr) {
		return $of(nullptr);
	}
	try {
		$var($Object, element, $nc(classdata)->get(index));
		return $of($BootstrapMethodInvoker::widenAndCast(element, type));
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		$throw(e);
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		$throw(e);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

$Member* MethodHandles::reflectAs($Class* expected, $MethodHandle* target) {
	$init(MethodHandles);
	$var($SecurityManager, smgr, $System::getSecurityManager());
	if (smgr != nullptr) {
		smgr->checkPermission(MethodHandles::ACCESS_PERMISSION);
	}
	$init($MethodHandles$Lookup);
	$var($MethodHandles$Lookup, lookup, $MethodHandles$Lookup::IMPL_LOOKUP);
	return $nc($($nc(lookup)->revealDirect(target)))->reflectAs(expected, lookup);
}

$MethodHandle* MethodHandles::arrayConstructor($Class* arrayClass) {
	$init(MethodHandles);
	if (!$nc(arrayClass)->isArray()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"not an array class: "_s, $(arrayClass->getName())}))));
	}
	$var($MethodHandle, ani, $nc($($MethodHandleImpl::getConstantHandle($MethodHandleImpl::MH_Array_newInstance)))->bindTo($nc(arrayClass)->getComponentType()));
	return $nc(ani)->asType($($nc($(ani->type()))->changeReturnType(arrayClass)));
}

$MethodHandle* MethodHandles::arrayLength($Class* arrayClass) {
	$init(MethodHandles);
	$init($MethodHandleImpl$ArrayAccess);
	return $MethodHandleImpl::makeArrayElementAccessor(arrayClass, $MethodHandleImpl$ArrayAccess::LENGTH);
}

$MethodHandle* MethodHandles::arrayElementGetter($Class* arrayClass) {
	$init(MethodHandles);
	$init($MethodHandleImpl$ArrayAccess);
	return $MethodHandleImpl::makeArrayElementAccessor(arrayClass, $MethodHandleImpl$ArrayAccess::GET);
}

$MethodHandle* MethodHandles::arrayElementSetter($Class* arrayClass) {
	$init(MethodHandles);
	$init($MethodHandleImpl$ArrayAccess);
	return $MethodHandleImpl::makeArrayElementAccessor(arrayClass, $MethodHandleImpl$ArrayAccess::SET);
}

$VarHandle* MethodHandles::arrayElementVarHandle($Class* arrayClass) {
	$init(MethodHandles);
	return $VarHandles::makeArrayElementHandle(arrayClass);
}

$VarHandle* MethodHandles::byteArrayViewVarHandle($Class* viewArrayClass, $ByteOrder* byteOrder) {
	$init(MethodHandles);
	$Objects::requireNonNull(byteOrder);
	$init($ByteOrder);
	return $VarHandles::byteArrayViewHandle(viewArrayClass, byteOrder == $ByteOrder::BIG_ENDIAN);
}

$VarHandle* MethodHandles::byteBufferViewVarHandle($Class* viewArrayClass, $ByteOrder* byteOrder) {
	$init(MethodHandles);
	$Objects::requireNonNull(byteOrder);
	$init($ByteOrder);
	return $VarHandles::makeByteBufferViewHandle(viewArrayClass, byteOrder == $ByteOrder::BIG_ENDIAN);
}

$MethodHandle* MethodHandles::spreadInvoker($MethodType* type$renamed, int32_t leadingArgCount) {
	$init(MethodHandles);
	$var($MethodType, type, type$renamed);
	if (leadingArgCount < 0 || leadingArgCount > $nc(type)->parameterCount()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("bad argument count"_s, $($Integer::valueOf(leadingArgCount)))));
	}
	$load($ObjectArray);
	$assign(type, $nc(type)->asSpreaderType($getClass($ObjectArray), leadingArgCount, type->parameterCount() - leadingArgCount));
	return $nc($(type->invokers()))->spreadInvoker(leadingArgCount);
}

$MethodHandle* MethodHandles::exactInvoker($MethodType* type) {
	$init(MethodHandles);
	return $nc($($nc(type)->invokers()))->exactInvoker();
}

$MethodHandle* MethodHandles::invoker($MethodType* type) {
	$init(MethodHandles);
	return $nc($($nc(type)->invokers()))->genericInvoker();
}

$MethodHandle* MethodHandles::varHandleExactInvoker($VarHandle$AccessMode* accessMode, $MethodType* type) {
	$init(MethodHandles);
	return $nc($($nc(type)->invokers()))->varHandleMethodExactInvoker(accessMode);
}

$MethodHandle* MethodHandles::varHandleInvoker($VarHandle$AccessMode* accessMode, $MethodType* type) {
	$init(MethodHandles);
	return $nc($($nc(type)->invokers()))->varHandleMethodInvoker(accessMode);
}

$MethodHandle* MethodHandles::basicInvoker($MethodType* type) {
	$init(MethodHandles);
	return $nc($($nc(type)->invokers()))->basicInvoker();
}

$MethodHandle* MethodHandles::explicitCastArguments($MethodHandle* target, $MethodType* newType) {
	$init(MethodHandles);
	explicitCastArgumentsChecks(target, newType);
	$var($MethodType, oldType, $nc(target)->type());
	if (oldType == newType) {
		return target;
	}
	if ($nc(oldType)->explicitCastEquivalentToAsType(newType)) {
		return $nc($(target->asFixedArity()))->asType(newType);
	}
	return $MethodHandleImpl::makePairwiseConvert(target, newType, false);
}

void MethodHandles::explicitCastArgumentsChecks($MethodHandle* target, $MethodType* newType) {
	$init(MethodHandles);
	int32_t var$0 = $nc($($nc(target)->type()))->parameterCount();
	if (var$0 != $nc(newType)->parameterCount()) {
		$throwNew($WrongMethodTypeException, $$str({"cannot explicitly cast "_s, target, " to "_s, newType}));
	}
}

$MethodHandle* MethodHandles::permuteArguments($MethodHandle* target, $MethodType* newType, $ints* reorder$renamed) {
	$init(MethodHandles);
	$var($ints, reorder, reorder$renamed);
	$assign(reorder, $cast($ints, $nc(reorder)->clone()));
	$var($MethodType, oldType, $nc(target)->type());
	permuteArgumentChecks(reorder, newType, oldType);
	$var($ints, originalReorder, reorder);
	$var($BoundMethodHandle, result, target->rebind());
	$var($LambdaForm, form, $nc(result)->form);
	int32_t newArity = $nc(newType)->parameterCount();
	for (int32_t ddIdx = 0; (ddIdx = findFirstDupOrDrop(reorder, newArity)) != 0;) {
		if (ddIdx > 0) {
			int32_t srcPos = ddIdx;
			int32_t dstPos = srcPos;
			int32_t dupVal = reorder->get(srcPos);
			bool killFirst = false;
			for (int32_t val = 0; (val = reorder->get(--dstPos)) != dupVal;) {
				if (dupVal > val) {
					killFirst = true;
				}
			}
			if (!killFirst) {
				srcPos = dstPos;
				dstPos = ddIdx;
			}
			$assign(form, $nc($($nc(form)->editor()))->dupArgumentForm(1 + srcPos, 1 + dstPos));
			if (!MethodHandles::$assertionsDisabled && !(reorder->get(srcPos) == reorder->get(dstPos))) {
				$throwNew($AssertionError);
			}
			$assign(oldType, $cast($MethodType, $nc(oldType)->dropParameterTypes(dstPos, dstPos + 1)));
			int32_t tailPos = dstPos + 1;
			$System::arraycopy(reorder, tailPos, reorder, dstPos, reorder->length - tailPos);
			$assign(reorder, $Arrays::copyOf(reorder, reorder->length - 1));
		} else {
			int32_t dropVal = ~ddIdx;
			int32_t insPos = 0;
			while (insPos < reorder->length && reorder->get(insPos) < dropVal) {
				insPos += 1;
			}
			$Class* ptype = $cast($Class, newType->parameterType(dropVal));
			$assign(form, $nc($($nc(form)->editor()))->addArgumentForm(1 + insPos, $($LambdaForm$BasicType::basicType(ptype))));
			$assign(oldType, $nc(oldType)->insertParameterTypes(insPos, $$new($ClassArray, {ptype})));
			int32_t tailPos = insPos + 1;
			$assign(reorder, $Arrays::copyOf(reorder, reorder->length + 1));
			$System::arraycopy(reorder, insPos, reorder, tailPos, reorder->length - tailPos);
			reorder->set(insPos, dropVal);
		}
		if (!MethodHandles::$assertionsDisabled && !(permuteArgumentChecks(reorder, newType, oldType))) {
			$throwNew($AssertionError);
		}
	}
	if (!MethodHandles::$assertionsDisabled && !(reorder->length == newArity)) {
		$throwNew($AssertionError);
	}
	$assign(form, $nc($($nc(form)->editor()))->permuteArgumentsForm(1, reorder));
	bool var$0 = newType == result->type();
	if (var$0 && form == result->internalForm()) {
		return result;
	}
	return result->copyWith(newType, form);
}

int32_t MethodHandles::findFirstDupOrDrop($ints* reorder, int32_t newArity) {
	$init(MethodHandles);
	int32_t BIT_LIMIT = 63;
	if (newArity < BIT_LIMIT) {
		int64_t mask = 0;
		for (int32_t i = 0; i < $nc(reorder)->length; ++i) {
			int32_t arg = reorder->get(i);
			if (arg >= newArity) {
				return reorder->length;
			}
			int64_t bit = $sl((int64_t)1, arg);
			if (((int64_t)(mask & (uint64_t)bit)) != 0) {
				return i;
			}
			mask |= bit;
		}
		if (mask == ($sl((int64_t)1, newArity)) - 1) {
			if (!MethodHandles::$assertionsDisabled && !($Long::numberOfTrailingZeros($Long::lowestOneBit(~mask)) == newArity)) {
				$throwNew($AssertionError);
			}
			return 0;
		}
		int64_t zeroBit = $Long::lowestOneBit(~mask);
		int32_t zeroPos = $Long::numberOfTrailingZeros(zeroBit);
		if (!MethodHandles::$assertionsDisabled && !(zeroPos <= newArity)) {
			$throwNew($AssertionError);
		}
		if (zeroPos == newArity) {
			return 0;
		}
		return ~zeroPos;
	} else {
		$var($BitSet, mask, $new($BitSet, newArity));
		for (int32_t i = 0; i < $nc(reorder)->length; ++i) {
			int32_t arg = reorder->get(i);
			if (arg >= newArity) {
				return reorder->length;
			}
			if (mask->get(arg)) {
				return i;
			}
			mask->set(arg);
		}
		int32_t zeroPos = mask->nextClearBit(0);
		if (!MethodHandles::$assertionsDisabled && !(zeroPos <= newArity)) {
			$throwNew($AssertionError);
		}
		if (zeroPos == newArity) {
			return 0;
		}
		return ~zeroPos;
	}
}

bool MethodHandles::permuteArgumentChecks($ints* reorder, $MethodType* newType, $MethodType* oldType) {
	$init(MethodHandles);
	if ($cast($Class, $nc(newType)->returnType()) != $cast($Class, $nc(oldType)->returnType())) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("return types do not match"_s, oldType, newType)));
	}
	if ($nc(reorder)->length != $nc(oldType)->parameterCount()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("old type parameter count and reorder array length do not match"_s, oldType, $($Arrays::toString(reorder)))));
	}
	int32_t limit = $nc(newType)->parameterCount();
	for (int32_t j = 0; j < $nc(reorder)->length; ++j) {
		int32_t i = reorder->get(j);
		if (i < 0 || i >= limit) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("index is out of bounds for new type"_s, $($Integer::valueOf(i)), newType)));
		}
		$Class* src = $cast($Class, newType->parameterType(i));
		$Class* dst = $cast($Class, $nc(oldType)->parameterType(j));
		if (src != dst) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("parameter types do not match after reorder"_s, oldType, newType)));
		}
	}
	return true;
}

$MethodHandle* MethodHandles::constant($Class* type, Object$* value$renamed) {
	$init(MethodHandles);
	$var($Object, value, value$renamed);
	if ($nc(type)->isPrimitive()) {
		$init($Void);
		if (type == $Void::TYPE) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("void type"_s)));
		}
		$Wrapper* w = $Wrapper::forPrimitiveType(type);
		$assign(value, $nc(w)->convert(value, type));
		if ($nc($of($(w->zero())))->equals(value)) {
			return zero(w, type);
		}
		return insertArguments($(identity(type)), 0, $$new($ObjectArray, {value}));
	} else {
		if (value == nullptr) {
			$init($Wrapper);
			return zero($Wrapper::OBJECT, type);
		}
		return $nc($(identity(type)))->bindTo(value);
	}
}

$MethodHandle* MethodHandles::identity($Class* type) {
	$init(MethodHandles);
	$init($Wrapper);
	$Wrapper* btw = ($nc(type)->isPrimitive() ? $Wrapper::forPrimitiveType(type) : $Wrapper::OBJECT);
	int32_t pos = $nc(btw)->ordinal();
	$var($MethodHandle, ident, $nc(MethodHandles::IDENTITY_MHS)->get(pos));
	if (ident == nullptr) {
		$assign(ident, setCachedMethodHandle(MethodHandles::IDENTITY_MHS, pos, $(makeIdentity(btw->primitiveType()))));
	}
	if ($cast($Class, $nc($($nc(ident)->type()))->returnType()) == type) {
		return ident;
	}
	if (!MethodHandles::$assertionsDisabled && !(btw == $Wrapper::OBJECT)) {
		$throwNew($AssertionError);
	}
	return makeIdentity(type);
}

$MethodHandle* MethodHandles::zero($Class* type) {
	$init(MethodHandles);
	$Objects::requireNonNull(type);
	$init($Wrapper);
	return type->isPrimitive() ? zero($($Wrapper::forPrimitiveType(type)), type) : zero($Wrapper::OBJECT, type);
}

$MethodHandle* MethodHandles::identityOrVoid($Class* type) {
	$init(MethodHandles);
	$init($Void);
	return type == $Void::TYPE ? zero(type) : identity(type);
}

$MethodHandle* MethodHandles::empty($MethodType* type) {
	$init(MethodHandles);
	$Objects::requireNonNull(type);
	$var($MethodHandle, var$0, zero($($cast($Class, type->returnType()))));
	return dropArguments(var$0, 0, $(type->parameterList()));
}

$MethodHandle* MethodHandles::makeIdentity($Class* ptype) {
	$init(MethodHandles);
	$var($MethodType, mtype, $MethodType::methodType(ptype, ptype));
	$var($LambdaForm, lform, $LambdaForm::identityForm($($LambdaForm$BasicType::basicType(ptype))));
	$init($MethodHandleImpl$Intrinsic);
	return $MethodHandleImpl::makeIntrinsic(mtype, lform, $MethodHandleImpl$Intrinsic::IDENTITY);
}

$MethodHandle* MethodHandles::zero($Wrapper* btw, $Class* rtype) {
	$init(MethodHandles);
	int32_t pos = $nc(btw)->ordinal();
	$var($MethodHandle, zero, $nc(MethodHandles::ZERO_MHS)->get(pos));
	if (zero == nullptr) {
		$assign(zero, setCachedMethodHandle(MethodHandles::ZERO_MHS, pos, $(makeZero(btw->primitiveType()))));
	}
	if ($cast($Class, $nc($($nc(zero)->type()))->returnType()) == rtype) {
		return zero;
	}
	if (!MethodHandles::$assertionsDisabled && !(btw == $Wrapper::OBJECT)) {
		$throwNew($AssertionError);
	}
	return makeZero(rtype);
}

$MethodHandle* MethodHandles::makeZero($Class* rtype) {
	$init(MethodHandles);
	$var($MethodType, mtype, $MethodType::methodType(rtype));
	$var($LambdaForm, lform, $LambdaForm::zeroForm($($LambdaForm$BasicType::basicType(rtype))));
	$init($MethodHandleImpl$Intrinsic);
	return $MethodHandleImpl::makeIntrinsic(mtype, lform, $MethodHandleImpl$Intrinsic::ZERO);
}

$MethodHandle* MethodHandles::setCachedMethodHandle($MethodHandleArray* cache, int32_t pos, $MethodHandle* value) {
	$load(MethodHandles);
	$synchronized(class$) {
		$init(MethodHandles);
		$var($MethodHandle, prev, $nc(cache)->get(pos));
		if (prev != nullptr) {
			return prev;
		}
		return cache->set(pos, value);
	}
}

$MethodHandle* MethodHandles::insertArguments($MethodHandle* target, int32_t pos, $ObjectArray* values) {
	$init(MethodHandles);
	int32_t insCount = $nc(values)->length;
	$var($ClassArray, ptypes, insertArgumentsChecks(target, insCount, pos));
	if (insCount == 0) {
		return target;
	}
	$var($BoundMethodHandle, result, $nc(target)->rebind());
	for (int32_t i = 0; i < insCount; ++i) {
		$var($Object, value, values->get(i));
		$Class* ptype = $nc(ptypes)->get(pos + i);
		if ($nc(ptype)->isPrimitive()) {
			$assign(result, insertArgumentPrimitive(result, pos, ptype, value));
		} else {
			$assign(value, ptype->cast(value));
			$assign(result, $nc(result)->bindArgumentL(pos, value));
		}
	}
	return result;
}

$BoundMethodHandle* MethodHandles::insertArgumentPrimitive($BoundMethodHandle* result, int32_t pos, $Class* ptype, Object$* value$renamed) {
	$init(MethodHandles);
	$var($Object, value, value$renamed);
	$Wrapper* w = $Wrapper::forPrimitiveType(ptype);
	$assign(value, $nc(w)->convert(value, ptype));
	$init($MethodHandles$1);

	$var($BoundMethodHandle, var$0, nullptr)
	switch ($nc($MethodHandles$1::$SwitchMap$sun$invoke$util$Wrapper)->get((w)->ordinal())) {
	case 1:
		{
			$assign(var$0, $nc(result)->bindArgumentI(pos, $nc(($cast($Integer, value)))->intValue()));
			break;
		}
	case 2:
		{
			$assign(var$0, $nc(result)->bindArgumentJ(pos, $nc(($cast($Long, value)))->longValue()));
			break;
		}
	case 3:
		{
			$assign(var$0, $nc(result)->bindArgumentF(pos, $nc(($cast($Float, value)))->floatValue()));
			break;
		}
	case 4:
		{
			$assign(var$0, $nc(result)->bindArgumentD(pos, $nc(($cast($Double, value)))->doubleValue()));
			break;
		}
	default:
		{
			$assign(var$0, $nc(result)->bindArgumentI(pos, $ValueConversions::widenSubword(value)));
			break;
		}
	}
	return var$0;
}

$ClassArray* MethodHandles::insertArgumentsChecks($MethodHandle* target, int32_t insCount, int32_t pos) {
	$init(MethodHandles);
	$var($MethodType, oldType, $nc(target)->type());
	int32_t outargs = $nc(oldType)->parameterCount();
	int32_t inargs = outargs - insCount;
	if (inargs < 0) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("too many values to insert"_s)));
	}
	if (pos < 0 || pos > inargs) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("no argument type to append"_s)));
	}
	return oldType->ptypes();
}

$MethodHandle* MethodHandles::dropArguments($MethodHandle* target, int32_t pos, $List* valueTypes) {
	$init(MethodHandles);
	return dropArguments0(target, pos, $(copyTypes($($nc(valueTypes)->toArray()))));
}

$List* MethodHandles::copyTypes($ObjectArray* array) {
	$init(MethodHandles);
	$load($ClassArray);
	return $Arrays::asList($fcast($ClassArray, $($Arrays::copyOf(array, $nc(array)->length, $getClass($ClassArray)))));
}

$MethodHandle* MethodHandles::dropArguments0($MethodHandle* target, int32_t pos, $List* valueTypes) {
	$init(MethodHandles);
	$var($MethodType, oldType, $nc(target)->type());
	int32_t dropped = dropArgumentChecks(oldType, pos, valueTypes);
	$var($MethodType, newType, $nc(oldType)->insertParameterTypes(pos, valueTypes));
	if (dropped == 0) {
		return target;
	}
	$var($BoundMethodHandle, result, target->rebind());
	$var($LambdaForm, lform, $nc(result)->form);
	int32_t insertFormArg = 1 + pos;
	{
		$var($Iterator, i$, $nc(valueTypes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* ptype = $cast($Class, i$->next());
			{
				$assign(lform, $nc($($nc(lform)->editor()))->addArgumentForm(insertFormArg++, $($LambdaForm$BasicType::basicType(ptype))));
			}
		}
	}
	$assign(result, result->copyWith(newType, lform));
	return result;
}

int32_t MethodHandles::dropArgumentChecks($MethodType* oldType, int32_t pos, $List* valueTypes) {
	$init(MethodHandles);
	int32_t dropped = $nc(valueTypes)->size();
	$MethodType::checkSlotCount(dropped);
	int32_t outargs = $nc(oldType)->parameterCount();
	int32_t inargs = outargs + dropped;
	if (pos < 0 || pos > outargs) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"no argument type to remove"_s, $($Arrays::asList($$new($ObjectArray, {
			$of(oldType),
			$($of($Integer::valueOf(pos))),
			$of(valueTypes),
			$($of($Integer::valueOf(inargs))),
			$($of($Integer::valueOf(outargs)))
		})))}))));
	}
	return dropped;
}

$MethodHandle* MethodHandles::dropArguments($MethodHandle* target, int32_t pos, $ClassArray* valueTypes) {
	$init(MethodHandles);
	return dropArguments0(target, pos, $(copyTypes(valueTypes)));
}

$MethodHandle* MethodHandles::dropArgumentsToMatch($MethodHandle* target, int32_t skip, $List* newTypes$renamed, int32_t pos, bool nullOnFailure) {
	$init(MethodHandles);
	$var($List, newTypes, newTypes$renamed);
	$assign(newTypes, copyTypes($($nc(newTypes)->toArray())));
	$var($List, oldTypes, $nc($($nc(target)->type()))->parameterList());
	int32_t match = $nc(oldTypes)->size();
	if (skip != 0) {
		if (skip < 0 || skip > match) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("illegal skip"_s, $($Integer::valueOf(skip)), target)));
		}
		$assign(oldTypes, oldTypes->subList(skip, match));
		match -= skip;
	}
	$var($List, addTypes, newTypes);
	int32_t add = $nc(addTypes)->size();
	if (pos != 0) {
		if (pos < 0 || pos > add) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("illegal pos"_s, $($Integer::valueOf(pos)), newTypes)));
		}
		$assign(addTypes, addTypes->subList(pos, add));
		add -= pos;
		if (!MethodHandles::$assertionsDisabled && !($nc(addTypes)->size() == add)) {
			$throwNew($AssertionError);
		}
	}
	if (match > add || !oldTypes->equals($(addTypes->subList(0, match)))) {
		if (nullOnFailure) {
			return nullptr;
		}
		$throw($($MethodHandleStatics::newIllegalArgumentException("argument lists do not match"_s, oldTypes, newTypes)));
	}
	$assign(addTypes, addTypes->subList(match, add));
	add -= match;
	if (!MethodHandles::$assertionsDisabled && !(addTypes->size() == add)) {
		$throwNew($AssertionError);
	}
	$var($MethodHandle, adapter, target);
	if (add > 0) {
		$assign(adapter, dropArguments0(adapter, skip + match, addTypes));
	}
	if (pos > 0) {
		$assign(adapter, dropArguments0(adapter, skip, $($nc(newTypes)->subList(0, pos))));
	}
	return adapter;
}

$MethodHandle* MethodHandles::dropArgumentsToMatch($MethodHandle* target, int32_t skip, $List* newTypes, int32_t pos) {
	$init(MethodHandles);
	$Objects::requireNonNull(target);
	$Objects::requireNonNull(newTypes);
	return dropArgumentsToMatch(target, skip, newTypes, pos, false);
}

$MethodHandle* MethodHandles::dropReturn($MethodHandle* target) {
	$init(MethodHandles);
	$Objects::requireNonNull(target);
	$var($MethodType, oldType, target->type());
	$Class* oldReturnType = $cast($Class, $nc(oldType)->returnType());
	$init($Void);
	if (oldReturnType == $Void::TYPE) {
		return target;
	}
	$var($MethodType, newType, oldType->changeReturnType($Void::TYPE));
	$var($BoundMethodHandle, result, target->rebind());
	$init($LambdaForm$BasicType);
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->filterReturnForm($LambdaForm$BasicType::V_TYPE, true));
	$assign(result, result->copyWith(newType, lform));
	return result;
}

$MethodHandle* MethodHandles::filterArguments($MethodHandle* target, int32_t pos, $MethodHandleArray* filters) {
	$init(MethodHandles);
	int32_t MH_RECEIVER_OFFSET = 1;
	filterArgumentsCheckArity(target, pos, filters);
	$var($MethodHandle, adapter, target);
	int32_t index = 0;
	$var($ints, positions, $new($ints, $nc(filters)->length));
	$var($MethodHandle, filter, nullptr);
	for (int32_t i = filters->length - 1; i >= 0; --i) {
		$var($MethodHandle, newFilter, filters->get(i));
		if (newFilter == nullptr) {
			continue;
		}
		if (filter != newFilter) {
			if (filter != nullptr) {
				if (index > 1) {
					$assign(adapter, filterRepeatedArgument(adapter, filter, $($Arrays::copyOf(positions, index))));
				} else {
					$assign(adapter, filterArgument(adapter, positions->get(0) - 1, filter));
				}
			}
			$assign(filter, newFilter);
			index = 0;
		}
		filterArgumentChecks(target, pos + i, newFilter);
		positions->set(index++, pos + i + MH_RECEIVER_OFFSET);
	}
	if (index > 1) {
		$assign(adapter, filterRepeatedArgument(adapter, filter, $($Arrays::copyOf(positions, index))));
	} else if (index == 1) {
		$assign(adapter, filterArgument(adapter, positions->get(0) - 1, filter));
	}
	return adapter;
}

$MethodHandle* MethodHandles::filterRepeatedArgument($MethodHandle* adapter, $MethodHandle* filter, $ints* positions) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(adapter)->type());
	$var($MethodType, filterType, $nc(filter)->type());
	$var($BoundMethodHandle, result, adapter->rebind());
	$Class* newParamType = $cast($Class, $nc(filterType)->parameterType(0));
	$var($ClassArray, ptypes, $cast($ClassArray, $nc($($nc(targetType)->ptypes()))->clone()));
	{
		$var($ints, arr$, positions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t pos = arr$->get(i$);
			{
				ptypes->set(pos - 1, newParamType);
			}
		}
	}
	$var($MethodType, newType, $MethodType::makeImpl(targetType->rtype(), ptypes, true));
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->filterRepeatedArgumentForm($($LambdaForm$BasicType::basicType(newParamType)), positions));
	return result->copyWithExtendL(newType, lform, filter);
}

$MethodHandle* MethodHandles::filterArgument($MethodHandle* target, int32_t pos, $MethodHandle* filter) {
	$init(MethodHandles);
	filterArgumentChecks(target, pos, filter);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, filterType, $nc(filter)->type());
	$var($BoundMethodHandle, result, target->rebind());
	$Class* newParamType = $cast($Class, $nc(filterType)->parameterType(0));
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->filterArgumentForm(1 + pos, $($LambdaForm$BasicType::basicType(newParamType))));
	$var($MethodType, newType, $nc(targetType)->changeParameterType(pos, newParamType));
	$assign(result, result->copyWithExtendL(newType, lform, filter));
	return result;
}

void MethodHandles::filterArgumentsCheckArity($MethodHandle* target, int32_t pos, $MethodHandleArray* filters) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	int32_t maxPos = $nc(targetType)->parameterCount();
	if (pos + $nc(filters)->length > maxPos) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("too many filters"_s)));
	}
}

void MethodHandles::filterArgumentChecks($MethodHandle* target, int32_t pos, $MethodHandle* filter) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, filterType, $nc(filter)->type());
	bool var$0 = $nc(filterType)->parameterCount() != 1;
	if (!var$0) {
		var$0 = $cast($Class, $nc(filterType)->returnType()) != $cast($Class, $nc(targetType)->parameterType(pos));
	}
	if (var$0) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("target and filter types do not match"_s, targetType, filterType)));
	}
}

$MethodHandle* MethodHandles::collectArguments($MethodHandle* target, int32_t pos, $MethodHandle* filter) {
	$init(MethodHandles);
	$var($MethodType, newType, collectArgumentsChecks(target, pos, filter));
	$var($MethodType, collectorType, $nc(filter)->type());
	$var($BoundMethodHandle, result, $nc(target)->rebind());
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->collectArgumentsForm(1 + pos, $($nc(collectorType)->basicType())));
	return result->copyWithExtendL(newType, lform, filter);
}

$MethodType* MethodHandles::collectArgumentsChecks($MethodHandle* target, int32_t pos, $MethodHandle* filter) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, filterType, $nc(filter)->type());
	$Class* rtype = $cast($Class, $nc(filterType)->returnType());
	$var($List, filterArgs, filterType->parameterList());
	$init($Void);
	bool var$0 = pos < 0 || (rtype == $Void::TYPE && pos > $nc(targetType)->parameterCount());
	if (var$0 || (rtype != $Void::TYPE && pos >= $nc(targetType)->parameterCount())) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("position is out of range for target"_s, target, $($Integer::valueOf(pos)))));
	}
	if (rtype == $Void::TYPE) {
		return $nc(targetType)->insertParameterTypes(pos, filterArgs);
	}
	if (rtype != $cast($Class, $nc(targetType)->parameterType(pos))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("target and filter types do not match"_s, targetType, filterType)));
	}
	return $nc($($cast($MethodType, $nc(targetType)->dropParameterTypes(pos, pos + 1))))->insertParameterTypes(pos, filterArgs);
}

$MethodHandle* MethodHandles::filterReturnValue($MethodHandle* target, $MethodHandle* filter) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, filterType, $nc(filter)->type());
	filterReturnValueChecks(targetType, filterType);
	$var($BoundMethodHandle, result, target->rebind());
	$LambdaForm$BasicType* rtype = $LambdaForm$BasicType::basicType($($cast($Class, $nc(filterType)->returnType())));
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->filterReturnForm(rtype, false));
	$var($MethodType, newType, $nc(targetType)->changeReturnType($($cast($Class, $nc(filterType)->returnType()))));
	$assign(result, result->copyWithExtendL(newType, lform, filter));
	return result;
}

void MethodHandles::filterReturnValueChecks($MethodType* targetType, $MethodType* filterType) {
	$init(MethodHandles);
	$Class* rtype = $cast($Class, $nc(targetType)->returnType());
	int32_t filterValues = $nc(filterType)->parameterCount();
	$init($Void);
	if (filterValues == 0 ? (rtype != $Void::TYPE) : (rtype != $cast($Class, filterType->parameterType(0)) || filterValues != 1)) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("target and filter types do not match"_s, targetType, filterType)));
	}
}

$MethodHandle* MethodHandles::collectReturnValue($MethodHandle* target, $MethodHandle* filter) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, filterType, $nc(filter)->type());
	$var($BoundMethodHandle, result, target->rebind());
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->collectReturnValueForm($($nc(filterType)->basicType())));
	$var($MethodType, newType, $nc(targetType)->changeReturnType($($cast($Class, $nc(filterType)->returnType()))));
	if ($nc($($nc(filterType)->parameterList()))->size() > 1) {
		for (int32_t i = 0; i < $nc($(filterType->parameterList()))->size() - 1; ++i) {
			$assign(newType, $nc(newType)->appendParameterTypes($$new($ClassArray, {$($cast($Class, filterType->parameterType(i)))})));
		}
	}
	$assign(result, result->copyWithExtendL(newType, lform, filter));
	return result;
}

$MethodHandle* MethodHandles::foldArguments($MethodHandle* target, $MethodHandle* combiner) {
	$init(MethodHandles);
	return foldArguments(target, 0, combiner);
}

$MethodHandle* MethodHandles::foldArguments($MethodHandle* target, int32_t pos, $MethodHandle* combiner) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, combinerType, $nc(combiner)->type());
	$Class* rtype = foldArgumentChecks(pos, targetType, combinerType);
	$var($BoundMethodHandle, result, target->rebind());
	$init($Void);
	bool dropResult = rtype == $Void::TYPE;
	$var($LambdaForm, lform, $nc($($nc(result)->editor()))->foldArgumentsForm(1 + pos, dropResult, $($nc(combinerType)->basicType())));
	$var($MethodType, newType, targetType);
	if (!dropResult) {
		$assign(newType, $cast($MethodType, $nc(newType)->dropParameterTypes(pos, pos + 1)));
	}
	$assign(result, result->copyWithExtendL(newType, lform, combiner));
	return result;
}

$Class* MethodHandles::foldArgumentChecks(int32_t foldPos, $MethodType* targetType, $MethodType* combinerType) {
	$init(MethodHandles);
	int32_t foldArgs = $nc(combinerType)->parameterCount();
	$Class* rtype = $cast($Class, combinerType->returnType());
	$init($Void);
	int32_t foldVals = rtype == $Void::TYPE ? 0 : 1;
	int32_t afterInsertPos = foldPos + foldVals;
	bool ok = ($nc(targetType)->parameterCount() >= afterInsertPos + foldArgs);
	if (ok) {
		for (int32_t i = 0; i < foldArgs; ++i) {
			if ($cast($Class, combinerType->parameterType(i)) != $cast($Class, targetType->parameterType(i + afterInsertPos))) {
				ok = false;
				break;
			}
		}
	}
	bool var$0 = ok && foldVals != 0;
	if (var$0) {
		var$0 = $cast($Class, combinerType->returnType()) != $cast($Class, targetType->parameterType(foldPos));
	}
	if (var$0) {
		ok = false;
	}
	if (!ok) {
		$throw($(misMatchedTypes("target and combiner types"_s, targetType, combinerType)));
	}
	return rtype;
}

$MethodHandle* MethodHandles::filterArgumentsWithCombiner($MethodHandle* target, int32_t position, $MethodHandle* combiner, $ints* argPositions) {
	$init(MethodHandles);
	return argumentsWithCombiner(true, target, position, combiner, argPositions);
}

$MethodHandle* MethodHandles::foldArgumentsWithCombiner($MethodHandle* target, int32_t position, $MethodHandle* combiner, $ints* argPositions) {
	$init(MethodHandles);
	return argumentsWithCombiner(false, target, position, combiner, argPositions);
}

$MethodHandle* MethodHandles::argumentsWithCombiner(bool filter, $MethodHandle* target, int32_t position, $MethodHandle* combiner, $ints* argPositions) {
	$init(MethodHandles);
	$var($MethodType, targetType, $nc(target)->type());
	$var($MethodType, combinerType, $nc(combiner)->type());
	$Class* rtype = argumentsWithCombinerChecks(position, filter, targetType, combinerType, argPositions);
	$var($BoundMethodHandle, result, target->rebind());
	$var($MethodType, newType, targetType);
	$var($LambdaForm, lform, nullptr);
	if (filter) {
		$assign(lform, $nc($($nc(result)->editor()))->filterArgumentsForm(1 + position, $($nc(combinerType)->basicType()), argPositions));
	} else {
		$init($Void);
		bool dropResult = rtype == $Void::TYPE;
		$assign(lform, $nc($($nc(result)->editor()))->foldArgumentsForm(1 + position, dropResult, $($nc(combinerType)->basicType()), argPositions));
		if (!dropResult) {
			$assign(newType, $cast($MethodType, $nc(newType)->dropParameterTypes(position, position + 1)));
		}
	}
	$assign(result, $nc(result)->copyWithExtendL(newType, lform, combiner));
	return result;
}

$Class* MethodHandles::argumentsWithCombinerChecks(int32_t position, bool filter, $MethodType* targetType, $MethodType* combinerType, $ints* argPos) {
	$init(MethodHandles);
	int32_t combinerArgs = $nc(combinerType)->parameterCount();
	if ($nc(argPos)->length != combinerArgs) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("combiner and argument map must be equal size"_s, combinerType, $($Integer::valueOf(argPos->length)))));
	}
	$Class* rtype = $cast($Class, combinerType->returnType());
	for (int32_t i = 0; i < combinerArgs; ++i) {
		int32_t arg = $nc(argPos)->get(i);
		if (arg < 0 || arg > $nc(targetType)->parameterCount()) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("arg outside of target parameterRange"_s, targetType, $($Integer::valueOf(arg)))));
		}
		if ($cast($Class, combinerType->parameterType(i)) != $cast($Class, $nc(targetType)->parameterType(arg))) {
			$var($String, var$0, $$str({"target argument type at position "_s, $$str(arg), " must match combiner argument type at index "_s, $$str(i), ": "_s, targetType, " -> "_s, combinerType, ", map: "_s}));
			$throw($($MethodHandleStatics::newIllegalArgumentException($$concat(var$0, $($Arrays::toString(argPos))))));
		}
	}
	bool var$1 = filter;
	if (var$1) {
		var$1 = $cast($Class, combinerType->returnType()) != $cast($Class, $nc(targetType)->parameterType(position));
	}
	if (var$1) {
		$throw($(misMatchedTypes("target and combiner types"_s, targetType, combinerType)));
	}
	return rtype;
}

$MethodHandle* MethodHandles::guardWithTest($MethodHandle* test$renamed, $MethodHandle* target, $MethodHandle* fallback) {
	$init(MethodHandles);
	$var($MethodHandle, test, test$renamed);
	$var($MethodType, gtype, $nc(test)->type());
	$var($MethodType, ttype, $nc(target)->type());
	$var($MethodType, ftype, $nc(fallback)->type());
	if (!$nc(ttype)->equals($of(ftype))) {
		$throw($(misMatchedTypes("target and fallback types"_s, ttype, ftype)));
	}
	$init($Boolean);
	if ($cast($Class, $nc(gtype)->returnType()) != $Boolean::TYPE) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"guard type is not a predicate "_s, gtype}))));
	}
	$var($List, targs, $nc(ttype)->parameterList());
	$assign(test, dropArgumentsToMatch(test, 0, targs, 0, true));
	if (test == nullptr) {
		$throw($(misMatchedTypes("target and test types"_s, ttype, gtype)));
	}
	return $MethodHandleImpl::makeGuardWithTest(test, target, fallback);
}

$RuntimeException* MethodHandles::misMatchedTypes($String* what, Object$* t1, Object$* t2) {
	$init(MethodHandles);
	return $MethodHandleStatics::newIllegalArgumentException($$str({what, " must match: "_s, t1, " != "_s, t2}));
}

$MethodHandle* MethodHandles::catchException($MethodHandle* target, $Class* exType, $MethodHandle* handler$renamed) {
	$init(MethodHandles);
	$var($MethodHandle, handler, handler$renamed);
	$var($MethodType, ttype, $nc(target)->type());
	$var($MethodType, htype, $nc(handler)->type());
	$load($Throwable);
	if (!$Throwable::class$->isAssignableFrom(exType)) {
		$throwNew($ClassCastException, $($nc(exType)->getName()));
	}
	bool var$0 = $nc(htype)->parameterCount() < 1;
	if (var$0 || !$nc($($cast($Class, $nc(htype)->parameterType(0))))->isAssignableFrom(exType)) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"handler does not accept exception type "_s, exType}))));
	}
	if ($cast($Class, $nc(htype)->returnType()) != $cast($Class, $nc(ttype)->returnType())) {
		$throw($(misMatchedTypes("target and handler return types"_s, ttype, htype)));
	}
	$assign(handler, dropArgumentsToMatch(handler, 1, $($nc(ttype)->parameterList()), 0, true));
	if (handler == nullptr) {
		$throw($(misMatchedTypes("target and handler types"_s, ttype, htype)));
	}
	return $MethodHandleImpl::makeGuardWithCatch(target, exType, handler);
}

$MethodHandle* MethodHandles::throwException($Class* returnType, $Class* exType) {
	$init(MethodHandles);
	$load($Throwable);
	if (!$Throwable::class$->isAssignableFrom(exType)) {
		$throwNew($ClassCastException, $($nc(exType)->getName()));
	}
	return $MethodHandleImpl::throwException($($MethodType::methodType(returnType, exType)));
}

$MethodHandle* MethodHandles::loop($MethodHandleArray2* clauses) {
	$init(MethodHandles);
	loopChecks0(clauses);
	$var($List, init, $new($ArrayList));
	$var($List, step, $new($ArrayList));
	$var($List, pred, $new($ArrayList));
	$var($List, fini, $new($ArrayList));
	$nc($($nc($($Stream::of(clauses)))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loop$0)))))->forEach(static_cast<$Consumer*>($$new(MethodHandles$$Lambda$lambda$loop$1$1, init, step, pred, fini)));
	if (!MethodHandles::$assertionsDisabled && !($nc($($nc($($nc($($Stream::of($$new($ListArray, {
		init,
		step,
		pred,
		fini
	}))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$size$2)))))->distinct()))->count() == 1)) {
		$throwNew($AssertionError);
	}
	int32_t nclauses = init->size();
	$var($List, iterationVariableTypes, $new($ArrayList));
	for (int32_t i = 0; i < nclauses; ++i) {
		$var($MethodHandle, in, $cast($MethodHandle, init->get(i)));
		$var($MethodHandle, st, $cast($MethodHandle, step->get(i)));
		if (in == nullptr && st == nullptr) {
			$init($Void);
			iterationVariableTypes->add($Void::TYPE);
		} else if (in != nullptr && st != nullptr) {
			loopChecks1a(i, in, st);
			iterationVariableTypes->add($($nc($(in->type()))->returnType()));
		} else {
			iterationVariableTypes->add(in == nullptr ? $($cast($Class, $nc($(st->type()))->returnType())) : $($cast($Class, $nc($(in->type()))->returnType())));
		}
	}
	$var($List, commonPrefix, $nc($($nc($(iterationVariableTypes->stream()))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loop$2$3)))))->toList());
	$var($List, commonSuffix, buildCommonSuffix(init, step, pred, fini, $nc(commonPrefix)->size()));
	loopChecks1b(init, commonSuffix);
	$var($Stream, cstream, $nc($($nc($($nc($(fini->stream()))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$returnType$6))));
	$init($Void);
	$Class* loopReturnType = $cast($Class, $nc($($nc(cstream)->findFirst()))->orElse($Void::TYPE));
	loopChecks1cd(pred, fini, loopReturnType);
	$var($List, commonParameterSequence, $new($ArrayList, static_cast<$Collection*>(commonPrefix)));
	commonParameterSequence->addAll(commonSuffix);
	loopChecks2(step, pred, fini, commonParameterSequence);
	for (int32_t i = 0; i < nclauses; ++i) {
		$Class* t = $cast($Class, iterationVariableTypes->get(i));
		if (init->get(i) == nullptr) {
			init->set(i, $(empty($($MethodType::methodType(t, commonSuffix)))));
		}
		if (step->get(i) == nullptr) {
			step->set(i, $(dropArgumentsToMatch($(identityOrVoid(t)), 0, commonParameterSequence, i)));
		}
		if (pred->get(i) == nullptr) {
			$init($Boolean);
			pred->set(i, $(dropArguments0($(constant($Boolean::TYPE, $($Boolean::valueOf(true)))), 0, commonParameterSequence)));
		}
		if (fini->get(i) == nullptr) {
			fini->set(i, $(empty($($MethodType::methodType(t, commonParameterSequence)))));
		}
	}
	$var($List, finit, fixArities($(fillParameterTypes(init, commonSuffix))));
	$var($List, fstep, fixArities($(fillParameterTypes(step, commonParameterSequence))));
	$var($List, fpred, fixArities($(fillParameterTypes(pred, commonParameterSequence))));
	$var($List, ffini, fixArities($(fillParameterTypes(fini, commonParameterSequence))));
	if (!MethodHandles::$assertionsDisabled && !$nc($($nc($($nc($($nc(finit)->stream()))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$parameterList$7)))))->allMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loop$3$8, commonSuffix)))) {
		$throwNew($AssertionError);
	}
	if (!MethodHandles::$assertionsDisabled && !$nc($($nc($($nc($($nc($($Stream::of($$new($ListArray, {
		fstep,
		fpred,
		ffini
	}))))->flatMap(static_cast<$Function*>($$new(MethodHandles$$Lambda$stream$9)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$parameterList$7)))))->allMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loop$3$8, commonParameterSequence)))) {
		$throwNew($AssertionError);
	}
	return $MethodHandleImpl::makeLoop(loopReturnType, commonSuffix, finit, fstep, fpred, ffini);
}

void MethodHandles::loopChecks0($MethodHandleArray2* clauses) {
	$init(MethodHandles);
	if (clauses == nullptr || $nc(clauses)->length == 0) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("null or no clauses passed"_s)));
	}
	if ($nc($($Stream::of(clauses)))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$isNull$10)))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("null clauses are not allowed"_s)));
	}
	if ($nc($($Stream::of(clauses)))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loopChecks0$5$11)))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("All loop clauses must be represented as MethodHandle arrays with at most 4 elements."_s)));
	}
}

void MethodHandles::loopChecks1a(int32_t i, $MethodHandle* in, $MethodHandle* st) {
	$init(MethodHandles);
	if ($cast($Class, $nc($($nc(in)->type()))->returnType()) != $cast($Class, $nc($($nc(st)->type()))->returnType())) {
		$var($String, var$0, $str({"clause "_s, $$str(i), ": init and step return types"_s}));
		$var($Object, var$1, $of($nc($(in->type()))->returnType()));
		$throw($(misMatchedTypes(var$0, var$1, $($nc($(st->type()))->returnType()))));
	}
}

$List* MethodHandles::longestParameterList($Stream* mhs, int32_t skipSize) {
	$init(MethodHandles);
	$var($List, empty, $List::of());
	$var($List, longest, $cast($List, $nc($($nc($($nc($($nc($($nc($($nc(mhs)->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$longestParameterList$6$12, skipSize)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$parameterList$7)))))->reduce(static_cast<$BinaryOperator*>($$new(MethodHandles$$Lambda$lambda$longestParameterList$7$13)))))->orElse(empty)));
	return $nc(longest)->size() == 0 ? empty : $nc(longest)->subList(skipSize, longest->size());
}

$List* MethodHandles::longestParameterList($List* lists) {
	$init(MethodHandles);
	$var($List, empty, $List::of());
	return $cast($List, $nc($($nc($($nc(lists)->stream()))->reduce(static_cast<$BinaryOperator*>($$new(MethodHandles$$Lambda$lambda$longestParameterList$7$13)))))->orElse(empty));
}

$List* MethodHandles::buildCommonSuffix($List* init, $List* step, $List* pred, $List* fini, int32_t cpSize) {
	$init(MethodHandles);
	$var($List, longest1, longestParameterList($($nc($($Stream::of($$new($ListArray, {
		step,
		pred,
		fini
	}))))->flatMap(static_cast<$Function*>($$new(MethodHandles$$Lambda$stream$9)))), cpSize));
	$var($List, longest2, longestParameterList($($nc(init)->stream()), 0));
	return longestParameterList($($Arrays::asList($$new($ListArray, {
		longest1,
		longest2
	}))));
}

void MethodHandles::loopChecks1b($List* init, $List* commonSuffix) {
	$init(MethodHandles);
	if ($nc($($nc($($nc($($nc(init)->stream()))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loopChecks1b$9$14, commonSuffix)))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"found non-effectively identical init parameter type lists: "_s, init, " (common suffix: "_s, commonSuffix, ")"_s}))));
	}
}

void MethodHandles::loopChecks1cd($List* pred, $List* fini, $Class* loopReturnType) {
	$init(MethodHandles);
	if ($nc($($nc($($nc($($nc($($nc(fini)->stream()))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$returnType$6)))))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loopChecks1cd$10$15, loopReturnType)))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"found non-identical finalizer return types: "_s, fini, " (return type: "_s, loopReturnType, ")"_s}))));
	}
	if (!$nc($($nc($($nc($($nc(pred)->stream()))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->findFirst()))->isPresent()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("no predicate found"_s, pred)));
	}
	if ($nc($($nc($($nc($($nc($($nc(pred)->stream()))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$returnType$6)))))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loopChecks1cd$11$16)))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("predicates must have boolean return type"_s, pred)));
	}
}

void MethodHandles::loopChecks2($List* step, $List* pred, $List* fini, $List* commonParameterSequence) {
	$init(MethodHandles);
	if ($nc($($nc($($nc($($nc($($Stream::of($$new($ListArray, {
		step,
		pred,
		fini
	}))))->flatMap(static_cast<$Function*>($$new(MethodHandles$$Lambda$stream$9)))))->filter(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)))))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$type$5)))))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$lambda$loopChecks1b$9$14, commonParameterSequence)))) {
		$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"found non-effectively identical parameter type lists:\nstep: "_s, step, "\npred: "_s, pred, "\nfini: "_s, fini, " (common parameter sequence: "_s, commonParameterSequence, ")"_s}))));
	}
}

$List* MethodHandles::fillParameterTypes($List* hs, $List* targetParams) {
	$init(MethodHandles);
	return $nc($($nc($($nc(hs)->stream()))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$lambda$fillParameterTypes$13$17, targetParams)))))->toList();
}

$List* MethodHandles::fixArities($List* hs) {
	$init(MethodHandles);
	return $nc($($nc($($nc(hs)->stream()))->map(static_cast<$Function*>($$new(MethodHandles$$Lambda$asFixedArity$18)))))->toList();
}

$MethodHandle* MethodHandles::whileLoop($MethodHandle* init, $MethodHandle* pred, $MethodHandle* body) {
	$init(MethodHandles);
	whileLoopChecks(init, pred, body);
	$var($MethodHandle, fini, identityOrVoid($($cast($Class, $nc($($nc(body)->type()))->returnType()))));
	$var($MethodHandleArray, checkExit, $new($MethodHandleArray, {
		($MethodHandle*)nullptr,
		($MethodHandle*)nullptr,
		pred,
		fini
	}));
	$var($MethodHandleArray, varBody, $new($MethodHandleArray, {
		init,
		body
	}));
	return loop($$new($MethodHandleArray2, {
		checkExit,
		varBody
	}));
}

$MethodHandle* MethodHandles::doWhileLoop($MethodHandle* init, $MethodHandle* body, $MethodHandle* pred) {
	$init(MethodHandles);
	whileLoopChecks(init, pred, body);
	$var($MethodHandle, fini, identityOrVoid($($cast($Class, $nc($($nc(body)->type()))->returnType()))));
	$var($MethodHandleArray, clause, $new($MethodHandleArray, {
		init,
		body,
		pred,
		fini
	}));
	return loop($$new($MethodHandleArray2, {clause}));
}

void MethodHandles::whileLoopChecks($MethodHandle* init, $MethodHandle* pred, $MethodHandle* body) {
	$init(MethodHandles);
	$Objects::requireNonNull(pred);
	$Objects::requireNonNull(body);
	$var($MethodType, bodyType, body->type());
	$Class* returnType = $cast($Class, $nc(bodyType)->returnType());
	$var($List, innerList, bodyType->parameterList());
	$var($List, outerList, innerList);
	$init($Void);
	if (returnType == $Void::TYPE) {
	} else {
		bool var$1 = $nc(innerList)->size() == 0;
		if (var$1 || !$equals($nc(innerList)->get(0), returnType)) {
			$var($MethodType, expected, bodyType->insertParameterTypes(0, $$new($ClassArray, {returnType})));
			$throw($(misMatchedTypes("body function"_s, bodyType, expected)));
		} else {
			$assign(outerList, innerList->subList(1, innerList->size()));
		}
	}
	$var($MethodType, predType, pred->type());
	$init($Boolean);
	bool var$2 = $cast($Class, $nc(predType)->returnType()) != $Boolean::TYPE;
	if (var$2 || !$nc(predType)->effectivelyIdenticalParameters(0, innerList)) {
		$throw($(misMatchedTypes("loop predicate"_s, predType, $($MethodType::methodType($Boolean::TYPE, innerList)))));
	}
	if (init != nullptr) {
		$var($MethodType, initType, init->type());
		bool var$3 = $cast($Class, $nc(initType)->returnType()) != returnType;
		if (var$3 || !$nc(initType)->effectivelyIdenticalParameters(0, outerList)) {
			$throw($(misMatchedTypes("loop initializer"_s, initType, $($MethodType::methodType(returnType, outerList)))));
		}
	}
}

$MethodHandle* MethodHandles::countedLoop($MethodHandle* iterations, $MethodHandle* init, $MethodHandle* body) {
	$init(MethodHandles);
	return countedLoop($(empty($($nc(iterations)->type()))), iterations, init, body);
}

$MethodHandle* MethodHandles::countedLoop($MethodHandle* start, $MethodHandle* end, $MethodHandle* init, $MethodHandle* body$renamed) {
	$init(MethodHandles);
	$var($MethodHandle, body, body$renamed);
	countedLoopChecks(start, end, init, body);
	$Class* counterType = $cast($Class, $nc($($nc(start)->type()))->returnType());
	$Class* limitType = $cast($Class, $nc($($nc(end)->type()))->returnType());
	$Class* returnType = $cast($Class, $nc($($nc(body)->type()))->returnType());
	$var($MethodHandle, incr, $MethodHandleImpl::getConstantHandle($MethodHandleImpl::MH_countedLoopStep));
	$var($MethodHandle, pred, $MethodHandleImpl::getConstantHandle($MethodHandleImpl::MH_countedLoopPred));
	$var($MethodHandle, retv, nullptr);
	$init($Void);
	if (returnType != $Void::TYPE) {
		$assign(incr, dropArguments(incr, 1, $$new($ClassArray, {returnType})));
		$assign(pred, dropArguments(pred, 1, $$new($ClassArray, {returnType})));
		$assign(retv, dropArguments($(identity(returnType)), 0, $$new($ClassArray, {counterType})));
	}
	$assign(body, dropArguments(body, 0, $$new($ClassArray, {counterType})));
	$var($MethodHandleArray, loopLimit, $new($MethodHandleArray, {
		end,
		($MethodHandle*)nullptr,
		pred,
		retv
	}));
	$var($MethodHandleArray, bodyClause, $new($MethodHandleArray, {
		init,
		body
	}));
	$var($MethodHandleArray, indexVar, $new($MethodHandleArray, {
		start,
		incr
	}));
	return loop($$new($MethodHandleArray2, {
		loopLimit,
		bodyClause,
		indexVar
	}));
}

void MethodHandles::countedLoopChecks($MethodHandle* start, $MethodHandle* end, $MethodHandle* init, $MethodHandle* body) {
	$init(MethodHandles);
	$Objects::requireNonNull(start);
	$Objects::requireNonNull(end);
	$Objects::requireNonNull(body);
	$Class* counterType = $cast($Class, $nc($(start->type()))->returnType());
	$init($Integer);
	if (counterType != $Integer::TYPE) {
		$var($MethodType, expected, $nc($(start->type()))->changeReturnType($Integer::TYPE));
		$throw($(misMatchedTypes("start function"_s, $(start->type()), expected)));
	} else if ($cast($Class, $nc($(end->type()))->returnType()) != counterType) {
		$var($MethodType, expected, $nc($(end->type()))->changeReturnType(counterType));
		$throw($(misMatchedTypes("end function"_s, $(end->type()), expected)));
	}
	$var($MethodType, bodyType, body->type());
	$Class* returnType = $cast($Class, $nc(bodyType)->returnType());
	$var($List, innerList, bodyType->parameterList());
	$init($Void);
	int32_t vsize = (returnType == $Void::TYPE ? 0 : 1);
	bool var$0 = vsize != 0;
	if (var$0) {
		bool var$1 = $nc(innerList)->size() == 0;
		var$0 = (var$1 || !$equals($nc(innerList)->get(0), returnType));
	}
	if (var$0) {
		$var($MethodType, expected, bodyType->insertParameterTypes(0, $$new($ClassArray, {returnType})));
		$throw($(misMatchedTypes("body function"_s, bodyType, expected)));
	} else {
		bool var$3 = innerList->size() <= vsize;
		if (var$3 || !$equals(innerList->get(vsize), counterType)) {
			$var($MethodType, expected, bodyType->insertParameterTypes(vsize, $$new($ClassArray, {counterType})));
			$throw($(misMatchedTypes("body function"_s, bodyType, expected)));
		}
	}
	$var($List, outerList, $nc(innerList)->subList(vsize + 1, innerList->size()));
	if ($nc(outerList)->isEmpty()) {
		$assign(outerList, $nc($(end->type()))->parameterList());
		$assign(innerList, $nc($(bodyType->insertParameterTypes(vsize + 1, outerList)))->parameterList());
	}
	$var($MethodType, expected, $MethodType::methodType(counterType, outerList));
	if (!$nc($(start->type()))->effectivelyIdenticalParameters(0, outerList)) {
		$throw($(misMatchedTypes("start parameter types"_s, $(start->type()), expected)));
	}
	bool var$4 = end->type() != start->type();
	if (var$4 && !$nc($(end->type()))->effectivelyIdenticalParameters(0, outerList)) {
		$throw($(misMatchedTypes("end parameter types"_s, $(end->type()), expected)));
	}
	if (init != nullptr) {
		$var($MethodType, initType, init->type());
		bool var$5 = $cast($Class, $nc(initType)->returnType()) != returnType;
		if (var$5 || !$nc(initType)->effectivelyIdenticalParameters(0, outerList)) {
			$throw($(misMatchedTypes("loop initializer"_s, initType, $($MethodType::methodType(returnType, outerList)))));
		}
	}
}

$MethodHandle* MethodHandles::iteratedLoop($MethodHandle* iterator, $MethodHandle* init, $MethodHandle* body) {
	$init(MethodHandles);
	$Class* iterableType = iteratedLoopChecks(iterator, init, body);
	$Class* returnType = $cast($Class, $nc($($nc(body)->type()))->returnType());
	$var($MethodHandle, hasNext, $MethodHandleImpl::getConstantHandle($MethodHandleImpl::MH_iteratePred));
	$var($MethodHandle, nextRaw, $MethodHandleImpl::getConstantHandle($MethodHandleImpl::MH_iterateNext));
	$var($MethodHandle, startIter, nullptr);
	$var($MethodHandle, nextVal, nullptr);
	{
		$var($MethodType, iteratorType, nullptr);
		if (iterator == nullptr) {
			$assign(startIter, $MethodHandleImpl::getConstantHandle($MethodHandleImpl::MH_initIterator));
			$assign(iteratorType, $nc($($nc(startIter)->type()))->changeParameterType(0, iterableType));
		} else {
			$load($Iterator);
			$assign(iteratorType, $nc($($nc(iterator)->type()))->changeReturnType($Iterator::class$));
			$assign(startIter, iterator);
		}
		$init($Void);
		$Class* ttype = $cast($Class, $nc($(body->type()))->parameterType(returnType == $Void::TYPE ? 0 : 1));
		$var($MethodType, nextValType, $nc($($nc(nextRaw)->type()))->changeReturnType(ttype));
		try {
			$assign(startIter, $nc(startIter)->asType(iteratorType));
			$assign(nextVal, nextRaw->asType(nextValType));
		} catch ($WrongMethodTypeException&) {
			$var($WrongMethodTypeException, ex, $catch());
			$throwNew($IllegalArgumentException, static_cast<$Throwable*>(ex));
		}
	}
	$var($MethodHandle, retv, nullptr);
	$var($MethodHandle, step, body);
	$init($Void);
	if (returnType != $Void::TYPE) {
		$load($Iterator);
		$assign(retv, dropArguments($(identity(returnType)), 0, $$new($ClassArray, {$Iterator::class$})));
		$assign(step, swapArguments(body, 0, 1));
	}
	$var($MethodHandleArray, iterVar, $new($MethodHandleArray, {
		startIter,
		($MethodHandle*)nullptr,
		hasNext,
		retv
	}));
	$var($MethodHandleArray, bodyClause, $new($MethodHandleArray, {
		init,
		$(filterArgument(step, 0, nextVal))
	}));
	return loop($$new($MethodHandleArray2, {
		iterVar,
		bodyClause
	}));
}

$Class* MethodHandles::iteratedLoopChecks($MethodHandle* iterator, $MethodHandle* init, $MethodHandle* body) {
	$init(MethodHandles);
	$Objects::requireNonNull(body);
	$var($MethodType, bodyType, body->type());
	$Class* returnType = $cast($Class, $nc(bodyType)->returnType());
	$var($List, internalParamList, bodyType->parameterList());
	$init($Void);
	int32_t vsize = (returnType == $Void::TYPE ? 0 : 1);
	bool var$0 = vsize != 0;
	if (var$0) {
		bool var$1 = $nc(internalParamList)->size() == 0;
		var$0 = (var$1 || !$equals($nc(internalParamList)->get(0), returnType));
	}
	if (var$0) {
		$var($MethodType, expected, bodyType->insertParameterTypes(0, $$new($ClassArray, {returnType})));
		$throw($(misMatchedTypes("body function"_s, bodyType, expected)));
	} else if (internalParamList->size() <= vsize) {
		$load($Object);
		$var($MethodType, expected, bodyType->insertParameterTypes(vsize, $$new($ClassArray, {$Object::class$})));
		$throw($(misMatchedTypes("body function"_s, bodyType, expected)));
	}
	$var($List, externalParamList, $nc(internalParamList)->subList(vsize + 1, internalParamList->size()));
	$Class* iterableType = nullptr;
	if (iterator != nullptr) {
		if ($nc(externalParamList)->isEmpty()) {
			$assign(externalParamList, $nc($(iterator->type()))->parameterList());
		}
		$var($MethodType, itype, iterator->type());
		$load($Iterator);
		if (!$Iterator::class$->isAssignableFrom($($cast($Class, $nc(itype)->returnType())))) {
			$throw($($MethodHandleStatics::newIllegalArgumentException("iteratedLoop first argument must have Iterator return type"_s)));
		}
		if (!$nc(itype)->effectivelyIdenticalParameters(0, externalParamList)) {
			$var($MethodType, expected, $MethodType::methodType($($cast($Class, itype->returnType())), externalParamList));
			$throw($(misMatchedTypes("iterator parameters"_s, itype, expected)));
		}
	} else if ($nc(externalParamList)->isEmpty()) {
		$load($Iterable);
		$assign(externalParamList, $Arrays::asList($$new($ClassArray, {$Iterable::class$})));
		iterableType = $Iterable::class$;
	} else {
		iterableType = $cast($Class, externalParamList->get(0));
		$load($Iterable);
		if (!$Iterable::class$->isAssignableFrom(iterableType)) {
			$throw($($MethodHandleStatics::newIllegalArgumentException($$str({"inferred first loop argument must inherit from Iterable: "_s, iterableType}))));
		}
	}
	if (init != nullptr) {
		$var($MethodType, initType, init->type());
		bool var$2 = $cast($Class, $nc(initType)->returnType()) != returnType;
		if (var$2 || !$nc(initType)->effectivelyIdenticalParameters(0, externalParamList)) {
			$throw($(misMatchedTypes("loop initializer"_s, initType, $($MethodType::methodType(returnType, externalParamList)))));
		}
	}
	return iterableType;
}

$MethodHandle* MethodHandles::swapArguments($MethodHandle* mh, int32_t i, int32_t j) {
	$init(MethodHandles);
	int32_t arity = $nc($($nc(mh)->type()))->parameterCount();
	$var($ints, order, $new($ints, arity));
	for (int32_t k = 0; k < arity; ++k) {
		order->set(k, k);
	}
	order->set(i, j);
	order->set(j, i);
	$var($ClassArray, types, $fcast($ClassArray, $nc($(mh->type()))->parameterArray()));
	$Class* ti = $nc(types)->get(i);
	types->set(i, types->get(j));
	types->set(j, ti);
	$var($MethodType, swapType, $MethodType::methodType($($cast($Class, $nc($(mh->type()))->returnType())), types));
	return permuteArguments(mh, swapType, order);
}

$MethodHandle* MethodHandles::tryFinally($MethodHandle* target, $MethodHandle* cleanup$renamed) {
	$init(MethodHandles);
	$var($MethodHandle, cleanup, cleanup$renamed);
	$var($List, targetParamTypes, $nc($($nc(target)->type()))->parameterList());
	$Class* rtype = $cast($Class, $nc($(target->type()))->returnType());
	tryFinallyChecks(target, cleanup);
	$init($Void);
	$assign(cleanup, dropArgumentsToMatch(cleanup, (rtype == $Void::TYPE ? 1 : 2), targetParamTypes, 0));
	$load($Throwable);
	$assign(cleanup, $nc(cleanup)->asType($($nc($(cleanup->type()))->changeParameterType(0, $Throwable::class$))));
	$var($MethodHandle, var$0, target->asFixedArity());
	return $MethodHandleImpl::makeTryFinally(var$0, $(cleanup->asFixedArity()), rtype, targetParamTypes);
}

void MethodHandles::tryFinallyChecks($MethodHandle* target, $MethodHandle* cleanup) {
	$init(MethodHandles);
	$Class* rtype = $cast($Class, $nc($($nc(target)->type()))->returnType());
	if (rtype != $cast($Class, $nc($($nc(cleanup)->type()))->returnType())) {
		$throw($(misMatchedTypes("target and return types"_s, $($nc($(cleanup->type()))->returnType()), rtype)));
	}
	$var($MethodType, cleanupType, $nc(cleanup)->type());
	$load($Throwable);
	if (!$Throwable::class$->isAssignableFrom($($cast($Class, $nc(cleanupType)->parameterType(0))))) {
		$throw($(misMatchedTypes("cleanup first argument and Throwable"_s, $(cleanup->type()), $Throwable::class$)));
	}
	$init($Void);
	if (rtype != $Void::TYPE && $cast($Class, $nc(cleanupType)->parameterType(1)) != rtype) {
		$throw($(misMatchedTypes("cleanup second argument and target return type"_s, $(cleanup->type()), rtype)));
	}
	int32_t cleanupArgIndex = rtype == $Void::TYPE ? 1 : 2;
	if (!$nc(cleanupType)->effectivelyIdenticalParameters(cleanupArgIndex, $($nc($(target->type()))->parameterList()))) {
		$var($String, var$0, "cleanup parameters after (Throwable,result) and target parameter list prefix"_s);
		$var($Object, var$1, $of(cleanup->type()));
		$throw($(misMatchedTypes(var$0, var$1, $(target->type()))));
	}
}

$MethodHandle* MethodHandles::tableSwitch($MethodHandle* fallback, $MethodHandleArray* targets$renamed) {
	$init(MethodHandles);
	$var($MethodHandleArray, targets, targets$renamed);
	$Objects::requireNonNull(fallback);
	$Objects::requireNonNull(targets);
	$assign(targets, $cast($MethodHandleArray, targets->clone()));
	$var($MethodType, type, tableSwitchChecks(fallback, targets));
	return $MethodHandleImpl::makeTableSwitch(type, fallback, targets);
}

$MethodType* MethodHandles::tableSwitchChecks($MethodHandle* defaultCase, $MethodHandleArray* caseActions) {
	$init(MethodHandles);
	if ($nc(caseActions)->length == 0) {
		$throwNew($IllegalArgumentException, $$str({"Not enough cases: "_s, $($Arrays::toString(caseActions))}));
	}
	$var($MethodType, expectedType, $nc(defaultCase)->type());
	bool var$0 = !($nc(expectedType)->parameterCount() >= 1);
	$init($Integer);
	if (var$0 || $cast($Class, $nc(expectedType)->parameterType(0)) != $Integer::TYPE) {
		$throwNew($IllegalArgumentException, $$str({"Case actions must have int as leading parameter: "_s, $($Arrays::toString(caseActions))}));
	}
	{
		$var($MethodHandleArray, arr$, caseActions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MethodHandle, mh, arr$->get(i$));
			{
				$Objects::requireNonNull(mh);
				if (mh->type() != expectedType) {
					$throwNew($IllegalArgumentException, $$str({"Case actions must have the same type: "_s, $($Arrays::toString(caseActions))}));
				}
			}
		}
	}
	return expectedType;
}

$MethodHandle* MethodHandles::lambda$fillParameterTypes$13($List* targetParams, $MethodHandle* h) {
	$init(MethodHandles);
	int32_t pc = $nc($($nc(h)->type()))->parameterCount();
	int32_t tpsize = $nc(targetParams)->size();
	return pc < tpsize ? dropArguments0(h, pc, $(targetParams->subList(pc, tpsize))) : h;
}

bool MethodHandles::lambda$loopChecks1cd$11($Class* t) {
	$init(MethodHandles);
	$init($Boolean);
	return t != $Boolean::TYPE;
}

bool MethodHandles::lambda$loopChecks1cd$10($Class* loopReturnType, $Class* t) {
	$init(MethodHandles);
	return t != loopReturnType;
}

bool MethodHandles::lambda$loopChecks1b$9($List* commonSuffix, $MethodType* t) {
	$init(MethodHandles);
	return !$nc(t)->effectivelyIdenticalParameters(0, commonSuffix);
}

$List* MethodHandles::lambda$longestParameterList$7($List* p, $List* q) {
	$init(MethodHandles);
	int32_t var$0 = $nc(p)->size();
	return var$0 >= $nc(q)->size() ? p : q;
}

bool MethodHandles::lambda$longestParameterList$6(int32_t skipSize, $MethodType* t) {
	$init(MethodHandles);
	return $nc(t)->parameterCount() > skipSize;
}

bool MethodHandles::lambda$loopChecks0$5($MethodHandleArray* c) {
	$init(MethodHandles);
	return $nc(c)->length > 4;
}

bool MethodHandles::lambda$loop$3($List* commonSuffix, $List* pl) {
	$init(MethodHandles);
	return $nc(pl)->equals(commonSuffix);
}

bool MethodHandles::lambda$loop$2($Class* t) {
	$init(MethodHandles);
	$init($Void);
	return t != $Void::TYPE;
}

void MethodHandles::lambda$loop$1($List* init, $List* step, $List* pred, $List* fini, $MethodHandleArray* clause) {
	$init(MethodHandles);
	$nc(init)->add($nc(clause)->get(0));
	$nc(step)->add($nc(clause)->length <= 1 ? ($MethodHandle*)nullptr : $nc(clause)->get(1));
	$nc(pred)->add($nc(clause)->length <= 2 ? ($MethodHandle*)nullptr : $nc(clause)->get(2));
	$nc(fini)->add($nc(clause)->length <= 3 ? ($MethodHandle*)nullptr : $nc(clause)->get(3));
}

bool MethodHandles::lambda$loop$0($MethodHandleArray* c) {
	$init(MethodHandles);
	return $nc($($Stream::of(c)))->anyMatch(static_cast<$Predicate*>($$new(MethodHandles$$Lambda$nonNull$4)));
}

void clinit$MethodHandles($Class* class$) {
	MethodHandles::$assertionsDisabled = !MethodHandles::class$->desiredAssertionStatus();
	$assignStatic(MethodHandles::IMPL_NAMES, $MemberName::getFactory());
	$assignStatic(MethodHandles::ACCESS_PERMISSION, $new($ReflectPermission, "suppressAccessChecks"_s));
	$assignStatic(MethodHandles::IDENTITY_MHS, $new($MethodHandleArray, $Wrapper::COUNT));
	$assignStatic(MethodHandles::ZERO_MHS, $new($MethodHandleArray, $Wrapper::COUNT));
}

MethodHandles::MethodHandles() {
}

$Class* MethodHandles::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MethodHandles$$Lambda$lambda$loop$0::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loop$0::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loop$1$1::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loop$1$1::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$size$2::classInfo$.name)) {
			return MethodHandles$$Lambda$size$2::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loop$2$3::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loop$2$3::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$nonNull$4::classInfo$.name)) {
			return MethodHandles$$Lambda$nonNull$4::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$type$5::classInfo$.name)) {
			return MethodHandles$$Lambda$type$5::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$returnType$6::classInfo$.name)) {
			return MethodHandles$$Lambda$returnType$6::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$parameterList$7::classInfo$.name)) {
			return MethodHandles$$Lambda$parameterList$7::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loop$3$8::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loop$3$8::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$stream$9::classInfo$.name)) {
			return MethodHandles$$Lambda$stream$9::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$isNull$10::classInfo$.name)) {
			return MethodHandles$$Lambda$isNull$10::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loopChecks0$5$11::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loopChecks0$5$11::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$longestParameterList$6$12::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$longestParameterList$6$12::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$longestParameterList$7$13::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$longestParameterList$7$13::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loopChecks1b$9$14::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loopChecks1b$9$14::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loopChecks1cd$10$15::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$loopChecks1cd$11$16::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::classInfo$.name)) {
			return MethodHandles$$Lambda$lambda$fillParameterTypes$13$17::load$(name, initialize);
		}
		if (name->equals(MethodHandles$$Lambda$asFixedArity$18::classInfo$.name)) {
			return MethodHandles$$Lambda$asFixedArity$18::load$(name, initialize);
		}
	}
	$loadClass(MethodHandles, name, initialize, &_MethodHandles_ClassInfo_, clinit$MethodHandles, allocate$MethodHandles);
	return class$;
}

$Class* MethodHandles::class$ = nullptr;

		} // invoke
	} // lang
} // java