#include <java/lang/constant/MethodHandleDesc.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/AsTypeMethodHandleDesc.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DirectMethodHandleDescImpl.h>
#include <java/lang/constant/MethodHandleDesc$1.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef DEFAULT_NAME

using $ClassDescArray = $Array<::java::lang::constant::ClassDesc>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsTypeMethodHandleDesc = ::java::lang::constant::AsTypeMethodHandleDesc;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DirectMethodHandleDesc = ::java::lang::constant::DirectMethodHandleDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $DirectMethodHandleDescImpl = ::java::lang::constant::DirectMethodHandleDescImpl;
using $MethodHandleDesc$1 = ::java::lang::constant::MethodHandleDesc$1;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;

namespace java {
	namespace lang {
		namespace constant {

$MethodInfo _MethodHandleDesc_MethodInfo_[] = {
	{"asType", "(Ljava/lang/constant/MethodTypeDesc;)Ljava/lang/constant/MethodHandleDesc;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"invocationType", "()Ljava/lang/constant/MethodTypeDesc;", nullptr, $PUBLIC | $ABSTRACT},
	{"of", "(Ljava/lang/constant/DirectMethodHandleDesc$Kind;Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DirectMethodHandleDesc*(*)($DirectMethodHandleDesc$Kind*,$ClassDesc*,$String*,$String*)>(&MethodHandleDesc::of))},
	{"ofConstructor", "(Ljava/lang/constant/ClassDesc;[Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$DirectMethodHandleDesc*(*)($ClassDesc*,$ClassDescArray*)>(&MethodHandleDesc::ofConstructor))},
	{"ofField", "(Ljava/lang/constant/DirectMethodHandleDesc$Kind;Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/ClassDesc;)Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DirectMethodHandleDesc*(*)($DirectMethodHandleDesc$Kind*,$ClassDesc*,$String*,$ClassDesc*)>(&MethodHandleDesc::ofField))},
	{"ofMethod", "(Ljava/lang/constant/DirectMethodHandleDesc$Kind;Ljava/lang/constant/ClassDesc;Ljava/lang/String;Ljava/lang/constant/MethodTypeDesc;)Ljava/lang/constant/DirectMethodHandleDesc;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DirectMethodHandleDesc*(*)($DirectMethodHandleDesc$Kind*,$ClassDesc*,$String*,$MethodTypeDesc*)>(&MethodHandleDesc::ofMethod))},
	{}
};

$InnerClassInfo _MethodHandleDesc_InnerClassesInfo_[] = {
	{"java.lang.constant.MethodHandleDesc$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MethodHandleDesc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.constant.MethodHandleDesc",
	nullptr,
	"java.lang.constant.ConstantDesc",
	nullptr,
	_MethodHandleDesc_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleDesc_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.constant.MethodHandleDesc$1"
};

$Object* allocate$MethodHandleDesc($Class* clazz) {
	return $of($alloc(MethodHandleDesc));
}

bool MethodHandleDesc::equals(Object$* o) {
	 return this->$ConstantDesc::equals(o);
}

$DirectMethodHandleDesc* MethodHandleDesc::of($DirectMethodHandleDesc$Kind* kind, $ClassDesc* owner, $String* name, $String* lookupDescriptor) {
	$init(MethodHandleDesc);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleDesc$1);
	switch ($nc($MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get($nc((kind))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			return ofField(kind, owner, name, $($ClassDesc::ofDescriptor(lookupDescriptor)));
		}
	default:
		{
			return $new($DirectMethodHandleDescImpl, kind, owner, name, $($MethodTypeDesc::ofDescriptor(lookupDescriptor)));
		}
	}
}

$DirectMethodHandleDesc* MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind* kind, $ClassDesc* owner, $String* name, $MethodTypeDesc* lookupMethodType) {
	$init(MethodHandleDesc);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleDesc$1);
	switch ($nc($MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get($nc((kind))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			$throwNew($IllegalArgumentException, $(kind->toString()));
		}
	case 5:
		{}
	case 6:
		{}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{}
	case 10:
		{}
	case 11:
		{
			return $new($DirectMethodHandleDescImpl, kind, owner, name, lookupMethodType);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $(kind->toString()));
		}
	}
}

$DirectMethodHandleDesc* MethodHandleDesc::ofField($DirectMethodHandleDesc$Kind* kind, $ClassDesc* owner, $String* fieldName, $ClassDesc* fieldType) {
	$init(MethodHandleDesc);
	$useLocalCurrentObjectStackCache();
	$init($MethodHandleDesc$1);

	$var($MethodTypeDesc, var$0, nullptr)
	switch ($nc($MethodHandleDesc$1::$SwitchMap$java$lang$constant$DirectMethodHandleDesc$Kind)->get($nc((kind))->ordinal())) {
	case 1:
		{
			$assign(var$0, $MethodTypeDesc::of(fieldType, $$new($ClassDescArray, {owner})));
			break;
		}
	case 2:
		{
			$init($ConstantDescs);
			$assign(var$0, $MethodTypeDesc::of($ConstantDescs::CD_void, $$new($ClassDescArray, {
				owner,
				fieldType
			})));
			break;
		}
	case 3:
		{
			$assign(var$0, $MethodTypeDesc::of(fieldType, $$new($ClassDescArray, 0)));
			break;
		}
	case 4:
		{
			$init($ConstantDescs);
			$assign(var$0, $MethodTypeDesc::of($ConstantDescs::CD_void, $$new($ClassDescArray, {fieldType})));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $(kind->toString()));
		}
	}
	$var($MethodTypeDesc, mtr, var$0);
	return $new($DirectMethodHandleDescImpl, kind, owner, fieldName, mtr);
}

$DirectMethodHandleDesc* MethodHandleDesc::ofConstructor($ClassDesc* owner, $ClassDescArray* paramTypes) {
	$init(MethodHandleDesc);
	$init($DirectMethodHandleDesc$Kind);
	$init($ConstantDescs);
	return MethodHandleDesc::ofMethod($DirectMethodHandleDesc$Kind::CONSTRUCTOR, owner, $ConstantDescs::DEFAULT_NAME, $($MethodTypeDesc::of($ConstantDescs::CD_void, paramTypes)));
}

MethodHandleDesc* MethodHandleDesc::asType($MethodTypeDesc* type) {
	return ($nc($(invocationType()))->equals(type)) ? this : static_cast<MethodHandleDesc*>($new($AsTypeMethodHandleDesc, this, type));
}

$Class* MethodHandleDesc::load$($String* name, bool initialize) {
	$loadClass(MethodHandleDesc, name, initialize, &_MethodHandleDesc_ClassInfo_, allocate$MethodHandleDesc);
	return class$;
}

$Class* MethodHandleDesc::class$ = nullptr;

		} // constant
	} // lang
} // java