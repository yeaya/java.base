#include <java/lang/constant/MethodTypeDescImpl.h>

#include <java/io/Serializable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantUtils.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/constant/MethodTypeDescImpl$1.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassDescArray = $Array<::java::lang::constant::ClassDesc>;
using $TypeDescriptor$OfFieldArray = $Array<::java::lang::invoke::TypeDescriptor$OfField>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantUtils = ::java::lang::constant::ConstantUtils;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodTypeDescImpl$1 = ::java::lang::constant::MethodTypeDescImpl$1;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $TypeDescriptor$OfField = ::java::lang::invoke::TypeDescriptor$OfField;
using $TypeDescriptor$OfMethod = ::java::lang::invoke::TypeDescriptor$OfMethod;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {
		namespace constant {

class MethodTypeDescImpl$$Lambda$ofDescriptor : public $Function {
	$class(MethodTypeDescImpl$$Lambda$ofDescriptor, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* descriptor) override {
		 return $of($ClassDesc::ofDescriptor($cast($String, descriptor)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodTypeDescImpl$$Lambda$ofDescriptor>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodTypeDescImpl$$Lambda$ofDescriptor::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodTypeDescImpl$$Lambda$ofDescriptor, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl$$Lambda$ofDescriptor, apply, $Object*, Object$*)},
	{}
};
$ClassInfo MethodTypeDescImpl$$Lambda$ofDescriptor::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.MethodTypeDescImpl$$Lambda$ofDescriptor",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* MethodTypeDescImpl$$Lambda$ofDescriptor::load$($String* name, bool initialize) {
	$loadClass(MethodTypeDescImpl$$Lambda$ofDescriptor, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodTypeDescImpl$$Lambda$ofDescriptor::class$ = nullptr;

class MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1 : public $IntFunction {
	$class(MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(MethodTypeDescImpl::lambda$ofDescriptor$0(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1, init$, void)},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1, apply, $Object*, int32_t)},
	{}
};
$ClassInfo MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1::load$($String* name, bool initialize) {
	$loadClass(MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1::class$ = nullptr;

$FieldInfo _MethodTypeDescImpl_FieldInfo_[] = {
	{"returnType", "Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $FINAL, $field(MethodTypeDescImpl, returnType$)},
	{"argTypes", "[Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $FINAL, $field(MethodTypeDescImpl, argTypes)},
	{}
};

$MethodInfo _MethodTypeDescImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ClassDesc;)V", nullptr, 0, $method(MethodTypeDescImpl, init$, void, $ClassDesc*, $ClassDescArray*)},
	{"changeParameterType", "(ILjava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, changeParameterType, $MethodTypeDesc*, int32_t, $ClassDesc*)},
	{"changeParameterType", "(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodTypeDescImpl, changeParameterType, $TypeDescriptor$OfMethod*, int32_t, $TypeDescriptor$OfField*)},
	{"changeReturnType", "(Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, changeReturnType, $MethodTypeDesc*, $ClassDesc*)},
	{"changeReturnType", "(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodTypeDescImpl, changeReturnType, $TypeDescriptor$OfMethod*, $TypeDescriptor$OfField*)},
	{"dropParameterTypes", "(II)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, dropParameterTypes, $TypeDescriptor$OfMethod*, int32_t, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, hashCode, int32_t)},
	{"insertParameterTypes", "(I[Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodTypeDescImpl, insertParameterTypes, $MethodTypeDesc*, int32_t, $ClassDescArray*)},
	{"insertParameterTypes", "(I[Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodTypeDescImpl, insertParameterTypes, $TypeDescriptor$OfMethod*, int32_t, $TypeDescriptor$OfFieldArray*)},
	{"lambda$ofDescriptor$0", "(I)[Ljava/lang/constant/ClassDesc;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MethodTypeDescImpl, lambda$ofDescriptor$0, $ClassDescArray*, int32_t)},
	{"ofDescriptor", "(Ljava/lang/String;)Ljava/lang/constant/MethodTypeDescImpl;", nullptr, $STATIC, $staticMethod(MethodTypeDescImpl, ofDescriptor, MethodTypeDescImpl*, $String*)},
	{"parameterArray", "()[Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, parameterArray, $TypeDescriptor$OfFieldArray*)},
	{"parameterCount", "()I", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, parameterCount, int32_t)},
	{"parameterList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/constant/ClassDesc;>;", $PUBLIC, $virtualMethod(MethodTypeDescImpl, parameterList, $List*)},
	{"parameterType", "(I)Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, parameterType, $TypeDescriptor$OfField*, int32_t)},
	{"resolveConstantDesc", "(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, resolveConstantDesc, $Object*, $MethodHandles$Lookup*), "java.lang.ReflectiveOperationException"},
	{"returnType", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, returnType, $TypeDescriptor$OfField*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodTypeDescImpl, toString, $String*)},
	{}
};

$InnerClassInfo _MethodTypeDescImpl_InnerClassesInfo_[] = {
	{"java.lang.constant.MethodTypeDescImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodTypeDescImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.constant.MethodTypeDescImpl",
	"java.lang.Object",
	"java.lang.constant.MethodTypeDesc",
	_MethodTypeDescImpl_FieldInfo_,
	_MethodTypeDescImpl_MethodInfo_,
	nullptr,
	nullptr,
	_MethodTypeDescImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.constant.MethodTypeDescImpl$1"
};

$Object* allocate$MethodTypeDescImpl($Class* clazz) {
	return $of($alloc(MethodTypeDescImpl));
}

void MethodTypeDescImpl::init$($ClassDesc* returnType, $ClassDescArray* argTypes) {
	$useLocalCurrentObjectStackCache();
	$set(this, returnType$, $cast($ClassDesc, $Objects::requireNonNull(returnType)));
	$set(this, argTypes, $cast($ClassDescArray, $Objects::requireNonNull(argTypes)));
	{
		$var($ClassDescArray, arr$, argTypes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ClassDesc, cr, arr$->get(i$));
			bool var$0 = $nc(cr)->isPrimitive();
			if (var$0 && $nc($(cr->descriptorString()))->equals("V"_s)) {
				$throwNew($IllegalArgumentException, "Void parameters not permitted"_s);
			}
		}
	}
}

MethodTypeDescImpl* MethodTypeDescImpl::ofDescriptor($String* descriptor) {
	$init(MethodTypeDescImpl);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(descriptor);
	$var($List, types, $ConstantUtils::parseMethodDescriptor(descriptor));
	$var($ClassDescArray, paramTypes, $fcast($ClassDescArray, $nc($($nc($($nc($($nc(types)->stream()))->skip(1)))->map(static_cast<$Function*>($$new(MethodTypeDescImpl$$Lambda$ofDescriptor)))))->toArray(static_cast<$IntFunction*>($$new(MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1)))));
	return $new(MethodTypeDescImpl, $($ClassDesc::ofDescriptor($cast($String, $(types->get(0))))), paramTypes);
}

$TypeDescriptor$OfField* MethodTypeDescImpl::returnType() {
	return this->returnType$;
}

int32_t MethodTypeDescImpl::parameterCount() {
	return $nc(this->argTypes)->length;
}

$TypeDescriptor$OfField* MethodTypeDescImpl::parameterType(int32_t index) {
	return $nc(this->argTypes)->get(index);
}

$List* MethodTypeDescImpl::parameterList() {
	return $List::of(this->argTypes);
}

$TypeDescriptor$OfFieldArray* MethodTypeDescImpl::parameterArray() {
	return $fcast($TypeDescriptor$OfFieldArray, $cast($ClassDescArray, $nc(this->argTypes)->clone()));
}

$MethodTypeDesc* MethodTypeDescImpl::changeReturnType($ClassDesc* returnType) {
	return $MethodTypeDesc::of(returnType, this->argTypes);
}

$MethodTypeDesc* MethodTypeDescImpl::changeParameterType(int32_t index, $ClassDesc* paramType) {
	$var($ClassDescArray, newArgs, $cast($ClassDescArray, $nc(this->argTypes)->clone()));
	newArgs->set(index, paramType);
	return $MethodTypeDesc::of(this->returnType$, newArgs);
}

$TypeDescriptor$OfMethod* MethodTypeDescImpl::dropParameterTypes(int32_t start, int32_t end) {
	if (start < 0 || start >= $nc(this->argTypes)->length || end < 0 || end > $nc(this->argTypes)->length || start > end) {
		$throwNew($IndexOutOfBoundsException);
	}
	$var($ClassDescArray, newArgs, $new($ClassDescArray, $nc(this->argTypes)->length - (end - start)));
	$System::arraycopy(this->argTypes, 0, newArgs, 0, start);
	$System::arraycopy(this->argTypes, end, newArgs, start, $nc(this->argTypes)->length - end);
	return $MethodTypeDesc::of(this->returnType$, newArgs);
}

$MethodTypeDesc* MethodTypeDescImpl::insertParameterTypes(int32_t pos, $ClassDescArray* paramTypes) {
	if (pos < 0 || pos > $nc(this->argTypes)->length) {
		$throwNew($IndexOutOfBoundsException, pos);
	}
	$var($ClassDescArray, newArgs, $new($ClassDescArray, $nc(this->argTypes)->length + $nc(paramTypes)->length));
	$System::arraycopy(this->argTypes, 0, newArgs, 0, pos);
	$System::arraycopy(paramTypes, 0, newArgs, pos, paramTypes->length);
	$System::arraycopy(this->argTypes, pos, newArgs, pos + paramTypes->length, $nc(this->argTypes)->length - pos);
	return $MethodTypeDesc::of(this->returnType$, newArgs);
}

$Object* MethodTypeDescImpl::resolveConstantDesc($MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodType, mtype, $cast($MethodType, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MethodTypeDescImpl$1, this, lookup)))));
	$nc(lookup)->accessClass($($cast($Class, $nc(mtype)->returnType())));
	{
		$var($ClassArray, arr$, $fcast($ClassArray, $nc(mtype)->parameterArray()));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* paramType = arr$->get(i$);
			{
				lookup->accessClass(paramType);
			}
		}
	}
	return $of(mtype);
}

bool MethodTypeDescImpl::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(o))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(MethodTypeDescImpl, constant, $cast(MethodTypeDescImpl, o));
	bool var$1 = $nc(this->returnType$)->equals($nc(constant)->returnType$);
	return var$1 && $Arrays::equals(this->argTypes, $nc(constant)->argTypes);
}

int32_t MethodTypeDescImpl::hashCode() {
	int32_t result = $nc($of(this->returnType$))->hashCode();
	result = 31 * result + $Arrays::hashCode(this->argTypes);
	return result;
}

$String* MethodTypeDescImpl::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("MethodTypeDesc[%s]"_s, $$new($ObjectArray, {$($of(displayDescriptor()))}));
}

$TypeDescriptor$OfMethod* MethodTypeDescImpl::insertParameterTypes(int32_t pos, $TypeDescriptor$OfFieldArray* paramTypes) {
	return this->insertParameterTypes(pos, $fcast($ClassDescArray, paramTypes));
}

$TypeDescriptor$OfMethod* MethodTypeDescImpl::changeParameterType(int32_t index, $TypeDescriptor$OfField* paramType) {
	return this->changeParameterType(index, $cast($ClassDesc, paramType));
}

$TypeDescriptor$OfMethod* MethodTypeDescImpl::changeReturnType($TypeDescriptor$OfField* returnType) {
	return this->changeReturnType($cast($ClassDesc, returnType));
}

$ClassDescArray* MethodTypeDescImpl::lambda$ofDescriptor$0(int32_t x$0) {
	$init(MethodTypeDescImpl);
	return $new($ClassDescArray, x$0);
}

MethodTypeDescImpl::MethodTypeDescImpl() {
}

$Class* MethodTypeDescImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MethodTypeDescImpl$$Lambda$ofDescriptor::classInfo$.name)) {
			return MethodTypeDescImpl$$Lambda$ofDescriptor::load$(name, initialize);
		}
		if (name->equals(MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1::classInfo$.name)) {
			return MethodTypeDescImpl$$Lambda$lambda$ofDescriptor$0$1::load$(name, initialize);
		}
	}
	$loadClass(MethodTypeDescImpl, name, initialize, &_MethodTypeDescImpl_ClassInfo_, allocate$MethodTypeDescImpl);
	return class$;
}

$Class* MethodTypeDescImpl::class$ = nullptr;

		} // constant
	} // lang
} // java