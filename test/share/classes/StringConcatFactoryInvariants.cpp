#include <StringConcatFactoryInvariants.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatException.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

#undef TAG_CONST
#undef TAG_ARG
#undef LIMIT
#undef TYPE

using $BooleanArray = $Array<::java::lang::Boolean>;
using $ByteArray = $Array<::java::lang::Byte>;
using $CharacterArray = $Array<::java::lang::Character>;
using $IntegerArray = $Array<::java::lang::Integer>;
using $LongArray = $Array<::java::lang::Long>;
using $ShortArray = $Array<::java::lang::Short>;
using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatException = ::java::lang::invoke::StringConcatException;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;
using $Callable = ::java::util::concurrent::Callable;

class StringConcatFactoryInvariants$$Lambda$lambda$main$0 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Callable)
public:
	void init$($String* methodName, $MethodType* mt) {
		$set(this, methodName, methodName);
		$set(this, mt, mt);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$0(methodName, mt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$0>());
	}
	$String* methodName = nullptr;
	$MethodType* mt = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$0::fieldInfos[3] = {
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$0, methodName)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$0, mt)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$0::*)($String*,$MethodType*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$0::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$1$1 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $MethodType* mt) {
		$set(this, lookup, lookup);
		$set(this, mt, mt);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$1(lookup, mt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$1$1>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$MethodType* mt = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1, lookup)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1, mt)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::*)($MethodHandles$Lookup*,$MethodType*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$2$2 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$2(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$2$2>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$3$3 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Callable)
public:
	void init$($String* methodName, $MethodType* mt, $String* recipe, $ObjectArray* consts) {
		$set(this, methodName, methodName);
		$set(this, mt, mt);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$3(methodName, mt, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$3$3>());
	}
	$String* methodName = nullptr;
	$MethodType* mt = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::fieldInfos[5] = {
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, methodName)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, mt)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::*)($String*,$MethodType*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$4$4 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $MethodType* mt, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, mt, mt);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$4(lookup, mt, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$4$4>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$MethodType* mt = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, lookup)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, mt)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::*)($MethodHandles$Lookup*,$MethodType*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$4$4",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$5$5 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$5(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$5$5>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$5$5",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$6$6 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mt, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mt, mt);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$6(lookup, methodName, mt, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$6$6>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mt = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, methodName)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, mt)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::*)($MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$6$6",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$7$7 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mt, $String* recipe) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mt, mt);
		$set(this, recipe, recipe);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$7(lookup, methodName, mt, recipe);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$7$7>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mt = nullptr;
	$String* recipe = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, methodName)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, mt)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, recipe)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$7$7",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$8$8 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mt, $String* recipe) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mt, mt);
		$set(this, recipe, recipe);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$8(lookup, methodName, mt, recipe);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$8$8>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mt = nullptr;
	$String* recipe = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, methodName)},
	{"mt", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, mt)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, recipe)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$8$8",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$9$9 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$9(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$9$9>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$9$9",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$10$10 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$10(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$10$10>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$10$10",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$11$11 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$11(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$11$11>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$11$11",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$12$12 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$12(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$12$12>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$12$12",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$13$13 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$13(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$13$13>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$13$13",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$14$14 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$14(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$14$14>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$14$14",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$15$15 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$15(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$15$15>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$15$15",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$16$16 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$16(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$16$16>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$16$16",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$17$17 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$17(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$17$17>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$17$17",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$18$18 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$18(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$18$18>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$18$18",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$19$19 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$19(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$19$19>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$19$19",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$20$20 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, recipe, recipe);
		$set(this, consts, consts);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$20(lookup, methodName, recipe, consts);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$20$20>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$String* recipe = nullptr;
	$ObjectArray* consts = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, methodName)},
	{"recipe", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, recipe)},
	{"consts", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, consts)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$20$20",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$21$21 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtUnderThreshold) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mtUnderThreshold, mtUnderThreshold);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$21(lookup, methodName, mtUnderThreshold);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$21$21>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mtUnderThreshold = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::fieldInfos[4] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, methodName)},
	{"mtUnderThreshold", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, mtUnderThreshold)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::*)($MethodHandles$Lookup*,$String*,$MethodType*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$21$21",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$24$22 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtUnderThreshold, $String* recipeUnderThreshold, $ObjectArray2* constants) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mtUnderThreshold, mtUnderThreshold);
		$set(this, recipeUnderThreshold, recipeUnderThreshold);
		$set(this, constants, constants);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$24(lookup, methodName, mtUnderThreshold, recipeUnderThreshold, constants);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$24$22>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mtUnderThreshold = nullptr;
	$String* recipeUnderThreshold = nullptr;
	$ObjectArray2* constants = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::fieldInfos[6] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, methodName)},
	{"mtUnderThreshold", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, mtUnderThreshold)},
	{"recipeUnderThreshold", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, recipeUnderThreshold)},
	{"constants", "[[Ljava/lang/Object;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, constants)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*,$ObjectArray2*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$24$22",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$27$23 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mtThreshold, mtThreshold);
		$set(this, recipeThreshold, recipeThreshold);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$27(lookup, methodName, mtThreshold, recipeThreshold);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$27$23>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mtThreshold = nullptr;
	$String* recipeThreshold = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, methodName)},
	{"mtThreshold", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, mtThreshold)},
	{"recipeThreshold", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, recipeThreshold)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$27$23",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$28$24 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mtThreshold, mtThreshold);
		$set(this, recipeThreshold, recipeThreshold);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$28(lookup, methodName, mtThreshold, recipeThreshold);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$28$24>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mtThreshold = nullptr;
	$String* recipeThreshold = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, methodName)},
	{"mtThreshold", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, mtThreshold)},
	{"recipeThreshold", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, recipeThreshold)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$28$24",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$29$25 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mtThreshold, mtThreshold);
		$set(this, recipeThreshold, recipeThreshold);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$29(lookup, methodName, mtThreshold, recipeThreshold);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$29$25>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mtThreshold = nullptr;
	$String* recipeThreshold = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, methodName)},
	{"mtThreshold", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, mtThreshold)},
	{"recipeThreshold", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, recipeThreshold)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$29$25",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$30$26 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
		$set(this, mtThreshold, mtThreshold);
		$set(this, recipeThreshold, recipeThreshold);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$30(lookup, methodName, mtThreshold, recipeThreshold);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$30$26>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	$MethodType* mtThreshold = nullptr;
	$String* recipeThreshold = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::fieldInfos[5] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, methodName)},
	{"mtThreshold", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, mtThreshold)},
	{"recipeThreshold", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, recipeThreshold)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$30$26",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$34$27 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$34(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$34$27>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$34$27",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$35$28 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28, $NO_CLASS_INIT, $Callable)
public:
	void init$($MethodHandles$Lookup* lookup, $String* methodName) {
		$set(this, lookup, lookup);
		$set(this, methodName, methodName);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$35(lookup, methodName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$35$28>());
	}
	$MethodHandles$Lookup* lookup = nullptr;
	$String* methodName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::fieldInfos[3] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28, lookup)},
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28, methodName)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::methodInfos[3] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$35$28",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$38$29 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29, $NO_CLASS_INIT, $Callable)
public:
	void init$($String* methodName, $MethodType* mtEmpty) {
		$set(this, methodName, methodName);
		$set(this, mtEmpty, mtEmpty);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$38(methodName, mtEmpty);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$38$29>());
	}
	$String* methodName = nullptr;
	$MethodType* mtEmpty = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::fieldInfos[3] = {
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29, methodName)},
	{"mtEmpty", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29, mtEmpty)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::*)($String*,$MethodType*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$38$29",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::class$ = nullptr;

class StringConcatFactoryInvariants$$Lambda$lambda$main$39$30 : public $Callable {
	$class(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30, $NO_CLASS_INIT, $Callable)
public:
	void init$($String* methodName, $MethodType* mtEmpty, $String* recipeEmpty) {
		$set(this, methodName, methodName);
		$set(this, mtEmpty, mtEmpty);
		$set(this, recipeEmpty, recipeEmpty);
	}
	virtual $Object* call() override {
		 return StringConcatFactoryInvariants::lambda$main$39(methodName, mtEmpty, recipeEmpty);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StringConcatFactoryInvariants$$Lambda$lambda$main$39$30>());
	}
	$String* methodName = nullptr;
	$MethodType* mtEmpty = nullptr;
	$String* recipeEmpty = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::fieldInfos[4] = {
	{"methodName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30, methodName)},
	{"mtEmpty", "Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30, mtEmpty)},
	{"recipeEmpty", "Ljava/lang/String;", nullptr, $PUBLIC, $field(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30, recipeEmpty)},
	{}
};
$MethodInfo StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::*)($String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"StringConcatFactoryInvariants$$Lambda$lambda$main$39$30",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::class$ = nullptr;

$FieldInfo _StringConcatFactoryInvariants_FieldInfo_[] = {
	{"TAG_ARG", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatFactoryInvariants, TAG_ARG)},
	{"TAG_CONST", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatFactoryInvariants, TAG_CONST)},
	{}
};

$MethodInfo _StringConcatFactoryInvariants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatFactoryInvariants::*)()>(&StringConcatFactoryInvariants::init$))},
	{"fail", "(Ljava/lang/String;Ljava/util/concurrent/Callable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Callable*)>(&StringConcatFactoryInvariants::fail))},
	{"failNPE", "(Ljava/lang/String;Ljava/util/concurrent/Callable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Callable*)>(&StringConcatFactoryInvariants::failNPE))},
	{"lambda$main$0", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($String*,$MethodType*)>(&StringConcatFactoryInvariants::lambda$main$0)), "java.lang.Exception"},
	{"lambda$main$1", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$MethodType*)>(&StringConcatFactoryInvariants::lambda$main$1)), "java.lang.Exception"},
	{"lambda$main$10", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$10)), "java.lang.Exception"},
	{"lambda$main$11", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$11)), "java.lang.Exception"},
	{"lambda$main$12", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$12)), "java.lang.Exception"},
	{"lambda$main$13", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$13)), "java.lang.Exception"},
	{"lambda$main$14", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$14)), "java.lang.Exception"},
	{"lambda$main$15", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$15)), "java.lang.Exception"},
	{"lambda$main$16", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$16)), "java.lang.Exception"},
	{"lambda$main$17", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$17)), "java.lang.Exception"},
	{"lambda$main$18", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$18)), "java.lang.Exception"},
	{"lambda$main$19", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$19)), "java.lang.Exception"},
	{"lambda$main$2", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$2)), "java.lang.Exception"},
	{"lambda$main$20", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$20)), "java.lang.Exception"},
	{"lambda$main$21", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*)>(&StringConcatFactoryInvariants::lambda$main$21)), "java.lang.Exception"},
	{"lambda$main$24", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*,$ObjectArray2*)>(&StringConcatFactoryInvariants::lambda$main$24)), "java.lang.Exception"},
	{"lambda$main$27", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$27)), "java.lang.Exception"},
	{"lambda$main$28", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$28)), "java.lang.Exception"},
	{"lambda$main$29", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$29)), "java.lang.Exception"},
	{"lambda$main$3", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($String*,$MethodType*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$3)), "java.lang.Exception"},
	{"lambda$main$30", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$30)), "java.lang.Exception"},
	{"lambda$main$34", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$34)), "java.lang.Exception"},
	{"lambda$main$35", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$35)), "java.lang.Exception"},
	{"lambda$main$38", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($String*,$MethodType*)>(&StringConcatFactoryInvariants::lambda$main$38)), "java.lang.Exception"},
	{"lambda$main$39", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$39)), "java.lang.Exception"},
	{"lambda$main$4", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$MethodType*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$4)), "java.lang.Exception"},
	{"lambda$main$5", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$String*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$5)), "java.lang.Exception"},
	{"lambda$main$6", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*)>(&StringConcatFactoryInvariants::lambda$main$6)), "java.lang.Exception"},
	{"lambda$main$7", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$7)), "java.lang.Exception"},
	{"lambda$main$8", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$String*)>(&StringConcatFactoryInvariants::lambda$main$8)), "java.lang.Exception"},
	{"lambda$main$9", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($MethodHandles$Lookup*,$String*)>(&StringConcatFactoryInvariants::lambda$main$9)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StringConcatFactoryInvariants::main)), "java.lang.Throwable"},
	{"ok", "(Ljava/lang/String;Ljava/util/concurrent/Callable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Callable*)>(&StringConcatFactoryInvariants::ok))},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&StringConcatFactoryInvariants::test))},
	{}
};

$ClassInfo _StringConcatFactoryInvariants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringConcatFactoryInvariants",
	"java.lang.Object",
	nullptr,
	_StringConcatFactoryInvariants_FieldInfo_,
	_StringConcatFactoryInvariants_MethodInfo_
};

$Object* allocate$StringConcatFactoryInvariants($Class* clazz) {
	return $of($alloc(StringConcatFactoryInvariants));
}

void StringConcatFactoryInvariants::init$() {
}

void StringConcatFactoryInvariants::main($StringArray* args) {
	$load(StringConcatFactoryInvariants);
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$var($String, methodName, "foo"_s);
	$load($String);
	$init($Integer);
	$var($MethodType, mt, $MethodType::methodType($String::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE})));
	$var($String, recipe, $str({""_s, $$str(StringConcatFactoryInvariants::TAG_ARG), $$str(StringConcatFactoryInvariants::TAG_ARG), $$str(StringConcatFactoryInvariants::TAG_CONST)}));
	$var($ObjectArray2, constants, $new($ObjectArray2, {
		$$new($StringArray, {""_s}),
		$$new($StringArray, {"bar"_s}),
		$$new($IntegerArray, {$($Integer::valueOf(1))}),
		$$new($ShortArray, {$($Short::valueOf((int16_t)2))}),
		$$new($LongArray, {$($Long::valueOf((int64_t)3))}),
		$$new($BooleanArray, {$($Boolean::valueOf(true))}),
		$$new($CharacterArray, {$($Character::valueOf(u'a'))}),
		$$new($ByteArray, {$($Byte::valueOf((int8_t)-128))}),
		$$new($ClassArray, {$String::class$}),
		$$new($MethodHandleArray, {$($MethodHandles::constant($String::class$, "constant"_s))}),
		$$new($MethodTypeArray, {$($MethodType::methodType($String::class$))})
	}));
	$var($StringArray, constantString, $new($StringArray, {
		""_s,
		"bar"_s,
		"1"_s,
		"2"_s,
		"3"_s,
		"true"_s,
		"a"_s,
		"-128"_s,
		"class java.lang.String"_s,
		"MethodHandle()String"_s,
		"()String"_s
	}));
	int32_t LIMIT = 200;
	$var($ClassArray, underThreshold, $new($ClassArray, LIMIT - 1));
	$var($ClassArray, threshold, $new($ClassArray, LIMIT));
	$var($ClassArray, overThreshold, $new($ClassArray, LIMIT + 1));
	$var($StringBuilder, sbUnderThreshold, $new($StringBuilder));
	sbUnderThreshold->append(StringConcatFactoryInvariants::TAG_CONST);
	for (int32_t c = 0; c < LIMIT - 1; ++c) {
		underThreshold->set(c, $Integer::TYPE);
		threshold->set(c, $Integer::TYPE);
		overThreshold->set(c, $Integer::TYPE);
		sbUnderThreshold->append(StringConcatFactoryInvariants::TAG_ARG);
	}
	threshold->set(LIMIT - 1, $Integer::TYPE);
	overThreshold->set(LIMIT - 1, $Integer::TYPE);
	overThreshold->set(LIMIT, $Integer::TYPE);
	$var($String, recipeEmpty, ""_s);
	$var($String, recipeUnderThreshold, sbUnderThreshold->toString());
	$var($String, recipeThreshold, sbUnderThreshold->append(StringConcatFactoryInvariants::TAG_ARG)->toString());
	$var($String, recipeOverThreshold, sbUnderThreshold->append(StringConcatFactoryInvariants::TAG_ARG)->toString());
	$var($MethodType, mtEmpty, $MethodType::methodType($String::class$));
	$var($MethodType, mtUnderThreshold, $MethodType::methodType($String::class$, underThreshold));
	$var($MethodType, mtThreshold, $MethodType::methodType($String::class$, threshold));
	$var($MethodType, mtOverThreshold, $MethodType::methodType($String::class$, overThreshold));
	{
		$var($CallSite, cs, $StringConcatFactory::makeConcat(lookup, methodName, mt));
		test("foo42"_s, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, {$of("foo"_s), $$of(42)})))));
	}
	{
		for (int32_t i = 0; i < constants->length; ++i) {
			$var($CallSite, cs, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, mt, recipe, constants->get(i)));
			$var($String, var$0, "foo42"_s->concat(constantString->get(i)));
			test(var$0, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, {$of("foo"_s), $$of(42)})))));
		}
	}
	{
		$var($String, constArgRecipe, $str({""_s, $$str(StringConcatFactoryInvariants::TAG_CONST), $$str(StringConcatFactoryInvariants::TAG_ARG)}));
		$var($String, argConstRecipe, $str({""_s, $$str(StringConcatFactoryInvariants::TAG_ARG), $$str(StringConcatFactoryInvariants::TAG_CONST)}));
		$var($MethodType, unaryMt, $MethodType::methodType($String::class$, $String::class$));
		for (int32_t i = 0; i < constants->length; ++i) {
			$var($CallSite, prefixCS, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, unaryMt, constArgRecipe, constants->get(i)));
			$var($String, var$1, $nc(constantString->get(i))->concat("foo"_s));
			test(var$1, $($cast($String, $nc($($nc(prefixCS)->getTarget()))->invokeExact($$new($ObjectArray, {$of("foo"_s)})))));
			$var($CallSite, postfixCS, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, unaryMt, argConstRecipe, constants->get(i)));
			$var($String, var$2, "foo"_s->concat(constantString->get(i)));
			test(var$2, $($cast($String, $nc($($nc(postfixCS)->getTarget()))->invokeExact($$new($ObjectArray, {$of("foo"_s)})))));
		}
	}
	failNPE("Lookup is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$0, methodName, mt)));
	failNPE("Method name is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1, lookup, mt)));
	failNPE("MethodType is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2, lookup, methodName)));
	for (int32_t i = 0; i < constants->length; ++i) {
		$var($ObjectArray, consts, constants->get(i));
		failNPE("Lookup is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3, methodName, mt, recipe, consts)));
		failNPE("Method name is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4, lookup, mt, recipe, consts)));
		failNPE("MethodType is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5, lookup, methodName, recipe, consts)));
		failNPE("Recipe is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6, lookup, methodName, mt, consts)));
	}
	failNPE("Constants vararg is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7, lookup, methodName, mt, recipe)));
	failNPE("Constant argument is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8, lookup, methodName, mt, recipe)));
	fail("Return type: void"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9, lookup, methodName)));
	fail("Return type: int"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10, lookup, methodName)));
	fail("Return type: StringBuilder"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11, lookup, methodName)));
	ok("Return type: Object"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12, lookup, methodName)));
	ok("Return type: CharSequence"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13, lookup, methodName)));
	ok("Return type: Serializable"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14, lookup, methodName)));
	for (int32_t i = 0; i < constants->length; ++i) {
		$var($ObjectArray, consts, constants->get(i));
		fail("Return type: void"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15, lookup, methodName, recipe, consts)));
		fail("Return type: int"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16, lookup, methodName, recipe, consts)));
		fail("Return type: StringBuilder"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17, lookup, methodName, recipe, consts)));
		ok("Return type: Object"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18, lookup, methodName, recipe, consts)));
		ok("Return type: CharSequence"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19, lookup, methodName, recipe, consts)));
		ok("Return type: Serializable"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20, lookup, methodName, recipe, consts)));
	}
	ok("Dynamic arguments is under limit"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, lookup, methodName, mtUnderThreshold)));
	ok("Dynamic arguments is at the limit"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, lookup, methodName, mtThreshold)));
	fail("Dynamic arguments is over the limit"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, lookup, methodName, mtOverThreshold)));
	ok("Dynamic arguments is under limit"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup, methodName, mtUnderThreshold, recipeUnderThreshold, constants)));
	ok("Dynamic arguments is at the limit"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup, methodName, mtThreshold, recipeThreshold, constants)));
	fail("Dynamic arguments is over the limit"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup, methodName, mtOverThreshold, recipeOverThreshold, constants)));
	ok("Static arguments and recipe match"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23, lookup, methodName, mtThreshold, recipeThreshold)));
	fail("Static arguments and recipe mismatch: too few"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, lookup, methodName, mtThreshold, recipeThreshold)));
	fail("Static arguments and recipe mismatch: too many"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25, lookup, methodName, mtThreshold, recipeThreshold)));
	failNPE("Static arguments and recipe mismatch, too many, overflowing constant is null"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26, lookup, methodName, mtThreshold, recipeThreshold)));
	fail("Dynamic arguments and recipe mismatch"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup, methodName, mtThreshold, recipeUnderThreshold, constants)));
	ok("Dynamic arguments and recipe match"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup, methodName, mtThreshold, recipeThreshold, constants)));
	fail("Dynamic arguments and recipe mismatch"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22, lookup, methodName, mtThreshold, recipeOverThreshold, constants)));
	{
		$var($ObjectArray, arg, $new($ObjectArray, {
			$of("boo"_s),
			$of("bar"_s)
		}));
		$var($CallSite, cs1, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($String::class$, $Integer::TYPE)), $$str({""_s, $$str(StringConcatFactoryInvariants::TAG_ARG), $$str(StringConcatFactoryInvariants::TAG_CONST), $$str(StringConcatFactoryInvariants::TAG_CONST)}), arg));
		test("42boobar"_s, $($cast($String, $nc($($nc(cs1)->getTarget()))->invokeExact($$new($ObjectArray, {$$of(42)})))));
	}
	ok("Can pass regular constants"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27, lookup, methodName)));
	failNPE("Cannot pass null constants"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28, lookup, methodName)));
	ok("Ok to pass empty arguments"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21, lookup, methodName, mtEmpty)));
	ok("Ok to pass empty arguments"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24, lookup, methodName, mtEmpty, recipeEmpty)));
	fail("Passing public Lookup"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29, methodName, mtEmpty)));
	fail("Passing public Lookup"_s, static_cast<$Callable*>($$new(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30, methodName, mtEmpty, recipeEmpty)));
	{
		$var($MethodType, zero, $MethodType::methodType($String::class$));
		$var($CallSite, cs, $StringConcatFactory::makeConcat(lookup, methodName, zero));
		test(""_s, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, 0)))));
		$assign(cs, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, zero, ""_s, $$new($ObjectArray, 0)));
		test(""_s, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, 0)))));
	}
	{
		$var($MethodType, zero, $MethodType::methodType($String::class$));
		$var($MethodType, one, $MethodType::methodType($String::class$, $String::class$));
		$var($CallSite, cs, $StringConcatFactory::makeConcat(lookup, methodName, one));
		test("A"_s, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, {$of("A"_s)})))));
		$assign(cs, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, one, "\u0001"_s, $$new($ObjectArray, 0)));
		test("A"_s, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, {$of("A"_s)})))));
		$assign(cs, $StringConcatFactory::makeConcatWithConstants(lookup, methodName, zero, "\u0002"_s, $$new($ObjectArray, {$of("A"_s)})));
		test("A"_s, $($cast($String, $nc($($nc(cs)->getTarget()))->invokeExact($$new($ObjectArray, 0)))));
	}
}

void StringConcatFactoryInvariants::ok($String* msg, $Callable* runnable) {
	try {
		$nc(runnable)->call();
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		e->printStackTrace();
		$throwNew($IllegalStateException, $$str({msg, ", should have passed"_s}), e);
	}
}

void StringConcatFactoryInvariants::fail($String* msg, $Callable* runnable) {
	bool expected = false;
	try {
		$nc(runnable)->call();
	} catch ($StringConcatException&) {
		$var($StringConcatException, e, $catch());
		expected = true;
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		e->printStackTrace();
	}
	if (!expected) {
		$throwNew($IllegalStateException, $$str({msg, ", should have failed with StringConcatException"_s}));
	}
}

void StringConcatFactoryInvariants::failNPE($String* msg, $Callable* runnable) {
	bool expected = false;
	try {
		$nc(runnable)->call();
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		expected = true;
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		e->printStackTrace();
	}
	if (!expected) {
		$throwNew($IllegalStateException, $$str({msg, ", should have failed with NullPointerException"_s}));
	}
}

void StringConcatFactoryInvariants::test($String* expected, $String* actual) {
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

$Object* StringConcatFactoryInvariants::lambda$main$39($String* methodName, $MethodType* mtEmpty, $String* recipeEmpty) {
	return $of($StringConcatFactory::makeConcatWithConstants($($MethodHandles::publicLookup()), methodName, mtEmpty, recipeEmpty, $$new($ObjectArray, 0)));
}

$Object* StringConcatFactoryInvariants::lambda$main$38($String* methodName, $MethodType* mtEmpty) {
	return $of($StringConcatFactory::makeConcat($($MethodHandles::publicLookup()), methodName, mtEmpty));
}

$Object* StringConcatFactoryInvariants::lambda$main$35($MethodHandles$Lookup* lookup, $String* methodName) {
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($String::class$, $Integer::TYPE)), $$str({""_s, $$str(StringConcatFactoryInvariants::TAG_ARG), $$str(StringConcatFactoryInvariants::TAG_CONST)}), $$new($ObjectArray, {($Object*)nullptr})));
}

$Object* StringConcatFactoryInvariants::lambda$main$34($MethodHandles$Lookup* lookup, $String* methodName) {
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($String::class$, $Integer::TYPE)), $$str({""_s, $$str(StringConcatFactoryInvariants::TAG_ARG), $$str(StringConcatFactoryInvariants::TAG_CONST)}), $$new($ObjectArray, {$of("foo"_s)})));
}

$Object* StringConcatFactoryInvariants::lambda$main$30($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mtThreshold, recipeThreshold, $$new($ObjectArray, {
		$of("bar"_s),
		($Object*)nullptr
	})));
}

$Object* StringConcatFactoryInvariants::lambda$main$29($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mtThreshold, recipeThreshold, $$new($ObjectArray, {
		$of("bar"_s),
		$of("baz"_s)
	})));
}

$Object* StringConcatFactoryInvariants::lambda$main$28($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mtThreshold, recipeThreshold, $$new($ObjectArray, 0)));
}

$Object* StringConcatFactoryInvariants::lambda$main$27($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtThreshold, $String* recipeThreshold) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mtThreshold, recipeThreshold, $$new($ObjectArray, {$of("bar"_s)})));
}

$Object* StringConcatFactoryInvariants::lambda$main$24($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtUnderThreshold, $String* recipeUnderThreshold, $ObjectArray2* constants) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mtUnderThreshold, recipeUnderThreshold, $nc(constants)->get(0)));
}

$Object* StringConcatFactoryInvariants::lambda$main$21($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mtUnderThreshold) {
	return $of($StringConcatFactory::makeConcat(lookup, methodName, mtUnderThreshold));
}

$Object* StringConcatFactoryInvariants::lambda$main$20($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	$load($Serializable);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($Serializable::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$19($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	$load($CharSequence);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($CharSequence::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$18($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	$load($Object);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($Object::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$17($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	$load($StringBuilder);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($StringBuilder::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$16($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	$init($Integer);
	$load($String);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($Integer::TYPE, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$15($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	$init($Void);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, $($MethodType::methodType($Void::TYPE, $String::class$, $$new($ClassArray, {$Integer::TYPE}))), recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$14($MethodHandles$Lookup* lookup, $String* methodName) {
	$load($Serializable);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcat(lookup, methodName, $($MethodType::methodType($Serializable::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE})))));
}

$Object* StringConcatFactoryInvariants::lambda$main$13($MethodHandles$Lookup* lookup, $String* methodName) {
	$load($CharSequence);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcat(lookup, methodName, $($MethodType::methodType($CharSequence::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE})))));
}

$Object* StringConcatFactoryInvariants::lambda$main$12($MethodHandles$Lookup* lookup, $String* methodName) {
	$load($Object);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcat(lookup, methodName, $($MethodType::methodType($Object::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE})))));
}

$Object* StringConcatFactoryInvariants::lambda$main$11($MethodHandles$Lookup* lookup, $String* methodName) {
	$load($StringBuilder);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcat(lookup, methodName, $($MethodType::methodType($StringBuilder::class$, $String::class$, $$new($ClassArray, {$Integer::TYPE})))));
}

$Object* StringConcatFactoryInvariants::lambda$main$10($MethodHandles$Lookup* lookup, $String* methodName) {
	$init($Integer);
	$load($String);
	return $of($StringConcatFactory::makeConcat(lookup, methodName, $($MethodType::methodType($Integer::TYPE, $String::class$, $$new($ClassArray, {$Integer::TYPE})))));
}

$Object* StringConcatFactoryInvariants::lambda$main$9($MethodHandles$Lookup* lookup, $String* methodName) {
	$init($Void);
	$load($String);
	$init($Integer);
	return $of($StringConcatFactory::makeConcat(lookup, methodName, $($MethodType::methodType($Void::TYPE, $String::class$, $$new($ClassArray, {$Integer::TYPE})))));
}

$Object* StringConcatFactoryInvariants::lambda$main$8($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mt, $String* recipe) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mt, recipe, $$new($ObjectArray, {($Object*)nullptr})));
}

$Object* StringConcatFactoryInvariants::lambda$main$7($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mt, $String* recipe) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mt, recipe, ($ObjectArray*)nullptr));
}

$Object* StringConcatFactoryInvariants::lambda$main$6($MethodHandles$Lookup* lookup, $String* methodName, $MethodType* mt, $ObjectArray* consts) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, mt, nullptr, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$5($MethodHandles$Lookup* lookup, $String* methodName, $String* recipe, $ObjectArray* consts) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, methodName, nullptr, recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$4($MethodHandles$Lookup* lookup, $MethodType* mt, $String* recipe, $ObjectArray* consts) {
	return $of($StringConcatFactory::makeConcatWithConstants(lookup, nullptr, mt, recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$3($String* methodName, $MethodType* mt, $String* recipe, $ObjectArray* consts) {
	return $of($StringConcatFactory::makeConcatWithConstants(nullptr, methodName, mt, recipe, consts));
}

$Object* StringConcatFactoryInvariants::lambda$main$2($MethodHandles$Lookup* lookup, $String* methodName) {
	return $of($StringConcatFactory::makeConcat(lookup, methodName, nullptr));
}

$Object* StringConcatFactoryInvariants::lambda$main$1($MethodHandles$Lookup* lookup, $MethodType* mt) {
	return $of($StringConcatFactory::makeConcat(lookup, nullptr, mt));
}

$Object* StringConcatFactoryInvariants::lambda$main$0($String* methodName, $MethodType* mt) {
	return $of($StringConcatFactory::makeConcat(nullptr, methodName, mt));
}

StringConcatFactoryInvariants::StringConcatFactoryInvariants() {
}

$Class* StringConcatFactoryInvariants::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$0::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$5$5::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$6$6::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$7$7::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$8$8::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$9$9::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$10$10::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$11$11::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$12$12::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$13$13::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$14$14::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$15$15::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$16$16::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$17$17::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$18$18::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$19$19::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$20$20::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$21$21::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$24$22::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$27$23::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$28$24::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$29$25::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$30$26::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$34$27::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$35$28::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$38$29::load$(name, initialize);
		}
		if (name->equals(StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::classInfo$.name)) {
			return StringConcatFactoryInvariants$$Lambda$lambda$main$39$30::load$(name, initialize);
		}
	}
	$loadClass(StringConcatFactoryInvariants, name, initialize, &_StringConcatFactoryInvariants_ClassInfo_, allocate$StringConcatFactoryInvariants);
	return class$;
}

$Class* StringConcatFactoryInvariants::class$ = nullptr;