#include <java/lang/constant/DynamicConstantDesc$CanonicalMapHolder.h>

#include <java/io/Serializable.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef BSM_ENUM_CONSTANT
#undef BSM_NULL_CONSTANT
#undef BSM_PRIMITIVE_CLASS
#undef BSM_VARHANDLE_ARRAY
#undef BSM_VARHANDLE_FIELD
#undef BSM_VARHANDLE_STATIC_FIELD
#undef CANONICAL_MAP

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace constant {

class DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass : public $Function {
	$class(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* desc) override {
		 return $of($DynamicConstantDesc::canonicalizePrimitiveClass($cast($DynamicConstantDesc, desc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass::class$ = nullptr;

class DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1 : public $Function {
	$class(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* desc) override {
		 return $of($DynamicConstantDesc::canonicalizeEnum($cast($DynamicConstantDesc, desc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1::class$ = nullptr;

class DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2 : public $Function {
	$class(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* desc) override {
		 return $of($DynamicConstantDesc::canonicalizeNull($cast($DynamicConstantDesc, desc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2::class$ = nullptr;

class DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3 : public $Function {
	$class(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* desc) override {
		 return $of($DynamicConstantDesc::canonicalizeStaticFieldVarHandle($cast($DynamicConstantDesc, desc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3::class$ = nullptr;

class DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4 : public $Function {
	$class(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* desc) override {
		 return $of($DynamicConstantDesc::canonicalizeFieldVarHandle($cast($DynamicConstantDesc, desc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4::class$ = nullptr;

class DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5 : public $Function {
	$class(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* desc) override {
		 return $of($DynamicConstantDesc::canonicalizeArrayVarHandle($cast($DynamicConstantDesc, desc)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5, apply, $Object*, Object$*)},
	{}
};
$ClassInfo DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5::class$ = nullptr;

$FieldInfo _DynamicConstantDesc$CanonicalMapHolder_FieldInfo_[] = {
	{"CANONICAL_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/constant/MethodHandleDesc;Ljava/util/function/Function<Ljava/lang/constant/DynamicConstantDesc<*>;Ljava/lang/constant/ConstantDesc;>;>;", $STATIC | $FINAL, $staticField(DynamicConstantDesc$CanonicalMapHolder, CANONICAL_MAP)},
	{}
};

$MethodInfo _DynamicConstantDesc$CanonicalMapHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DynamicConstantDesc$CanonicalMapHolder, init$, void)},
	{}
};

$InnerClassInfo _DynamicConstantDesc$CanonicalMapHolder_InnerClassesInfo_[] = {
	{"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder", "java.lang.constant.DynamicConstantDesc", "CanonicalMapHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DynamicConstantDesc$CanonicalMapHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.constant.DynamicConstantDesc$CanonicalMapHolder",
	"java.lang.Object",
	nullptr,
	_DynamicConstantDesc$CanonicalMapHolder_FieldInfo_,
	_DynamicConstantDesc$CanonicalMapHolder_MethodInfo_,
	nullptr,
	nullptr,
	_DynamicConstantDesc$CanonicalMapHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.constant.DynamicConstantDesc"
};

$Object* allocate$DynamicConstantDesc$CanonicalMapHolder($Class* clazz) {
	return $of($alloc(DynamicConstantDesc$CanonicalMapHolder));
}

$Map* DynamicConstantDesc$CanonicalMapHolder::CANONICAL_MAP = nullptr;

void DynamicConstantDesc$CanonicalMapHolder::init$() {
}

void clinit$DynamicConstantDesc$CanonicalMapHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	$assignStatic(DynamicConstantDesc$CanonicalMapHolder::CANONICAL_MAP, $Map::ofEntries($$new($Map$EntryArray, {
		$($Map::entry($ConstantDescs::BSM_PRIMITIVE_CLASS, static_cast<$Function*>($$new(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass)))),
		$($Map::entry($ConstantDescs::BSM_ENUM_CONSTANT, static_cast<$Function*>($$new(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1)))),
		$($Map::entry($ConstantDescs::BSM_NULL_CONSTANT, static_cast<$Function*>($$new(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2)))),
		$($Map::entry($ConstantDescs::BSM_VARHANDLE_STATIC_FIELD, static_cast<$Function*>($$new(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3)))),
		$($Map::entry($ConstantDescs::BSM_VARHANDLE_FIELD, static_cast<$Function*>($$new(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4)))),
		$($Map::entry($ConstantDescs::BSM_VARHANDLE_ARRAY, static_cast<$Function*>($$new(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5))))
	})));
}

DynamicConstantDesc$CanonicalMapHolder::DynamicConstantDesc$CanonicalMapHolder() {
}

$Class* DynamicConstantDesc$CanonicalMapHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass::classInfo$.name)) {
			return DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizePrimitiveClass::load$(name, initialize);
		}
		if (name->equals(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1::classInfo$.name)) {
			return DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeEnum$1::load$(name, initialize);
		}
		if (name->equals(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2::classInfo$.name)) {
			return DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeNull$2::load$(name, initialize);
		}
		if (name->equals(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3::classInfo$.name)) {
			return DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeStaticFieldVarHandle$3::load$(name, initialize);
		}
		if (name->equals(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4::classInfo$.name)) {
			return DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeFieldVarHandle$4::load$(name, initialize);
		}
		if (name->equals(DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5::classInfo$.name)) {
			return DynamicConstantDesc$CanonicalMapHolder$$Lambda$canonicalizeArrayVarHandle$5::load$(name, initialize);
		}
	}
	$loadClass(DynamicConstantDesc$CanonicalMapHolder, name, initialize, &_DynamicConstantDesc$CanonicalMapHolder_ClassInfo_, clinit$DynamicConstantDesc$CanonicalMapHolder, allocate$DynamicConstantDesc$CanonicalMapHolder);
	return class$;
}

$Class* DynamicConstantDesc$CanonicalMapHolder::class$ = nullptr;

		} // constant
	} // lang
} // java