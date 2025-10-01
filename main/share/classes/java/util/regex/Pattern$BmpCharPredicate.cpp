#include <java/util/regex/Pattern$BmpCharPredicate.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $Pattern$CharPredicateArray = $Array<::java::util::regex::Pattern$CharPredicate>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;

namespace java {
	namespace util {
		namespace regex {

class Pattern$BmpCharPredicate$$Lambda$lambda$and$0 : public Pattern$BmpCharPredicate {
	$class(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, Pattern$BmpCharPredicate)
public:
	void init$(Pattern$BmpCharPredicate* inst, $Pattern$CharPredicate* p) {
		$set(this, inst$, inst);
		$set(this, p, p);
	}
	virtual bool is(int32_t ch) override {
		 return $nc(inst$)->lambda$and$0(p, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$BmpCharPredicate$$Lambda$lambda$and$0>());
	}
	Pattern$BmpCharPredicate* inst$ = nullptr;
	$Pattern$CharPredicate* p = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$BmpCharPredicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, inst$)},
	{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, p)},
	{}
};
$MethodInfo Pattern$BmpCharPredicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern$BmpCharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$BmpCharPredicate$$Lambda$lambda$and$0::*)(Pattern$BmpCharPredicate*,$Pattern$CharPredicate*)>(&Pattern$BmpCharPredicate$$Lambda$lambda$and$0::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$BmpCharPredicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1 : public Pattern$BmpCharPredicate {
	$class(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, $NO_CLASS_INIT, Pattern$BmpCharPredicate)
public:
	void init$(Pattern$BmpCharPredicate* inst, $Pattern$CharPredicate* p) {
		$set(this, inst$, inst);
		$set(this, p, p);
	}
	virtual bool is(int32_t ch) override {
		 return $nc(inst$)->lambda$union$2(p, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1>());
	}
	Pattern$BmpCharPredicate* inst$ = nullptr;
	$Pattern$CharPredicate* p = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, inst$)},
	{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, p)},
	{}
};
$MethodInfo Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern$BmpCharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::*)(Pattern$BmpCharPredicate*,$Pattern$CharPredicate*)>(&Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::load$($String* name, bool initialize) {
	$loadClass(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::class$ = nullptr;

class Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2 : public $Pattern$CharPredicate {
	$class(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$($Pattern$CharPredicateArray* predicates) {
		$set(this, predicates, predicates);
	}
	virtual bool is(int32_t ch) override {
		 return Pattern$BmpCharPredicate::lambda$union$4(predicates, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2>());
	}
	$Pattern$CharPredicateArray* predicates = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::fieldInfos[2] = {
	{"predicates", "[Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, predicates)},
	{}
};
$MethodInfo Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::methodInfos[3] = {
	{"<init>", "([Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::*)($Pattern$CharPredicateArray*)>(&Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::load$($String* name, bool initialize) {
	$loadClass(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::class$ = nullptr;

$MethodInfo _Pattern$BmpCharPredicate_MethodInfo_[] = {
	{"and", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC},
	{"lambda$and$0", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Pattern$BmpCharPredicate::*)($Pattern$CharPredicate*,int32_t)>(&Pattern$BmpCharPredicate::lambda$and$0))},
	{"lambda$union$2", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Pattern$BmpCharPredicate::*)($Pattern$CharPredicate*,int32_t)>(&Pattern$BmpCharPredicate::lambda$union$2))},
	{"lambda$union$4", "([Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Pattern$CharPredicateArray*,int32_t)>(&Pattern$BmpCharPredicate::lambda$union$4))},
	{"union", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC},
	{"union", "([Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Pattern$CharPredicate*(*)($Pattern$CharPredicateArray*)>(&Pattern$BmpCharPredicate::union$))},
	{}
};

$InnerClassInfo _Pattern$BmpCharPredicate_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$BmpCharPredicate", "java.util.regex.Pattern", "BmpCharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.regex.Pattern$CharPredicate", "java.util.regex.Pattern", "CharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Pattern$BmpCharPredicate_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.regex.Pattern$BmpCharPredicate",
	nullptr,
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	_Pattern$BmpCharPredicate_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$BmpCharPredicate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$BmpCharPredicate($Class* clazz) {
	return $of($alloc(Pattern$BmpCharPredicate));
}

$Pattern$CharPredicate* Pattern$BmpCharPredicate::and$($Pattern$CharPredicate* p) {
	if ($instanceOf(Pattern$BmpCharPredicate, p)) {
		return (static_cast<Pattern$BmpCharPredicate*>($new(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, this, p)));
	}
	return static_cast<$Pattern$CharPredicate*>($new(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, this, p));
}

$Pattern$CharPredicate* Pattern$BmpCharPredicate::union$($Pattern$CharPredicate* p) {
	if ($instanceOf(Pattern$BmpCharPredicate, p)) {
		return (static_cast<Pattern$BmpCharPredicate*>($new(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, this, p)));
	}
	return static_cast<$Pattern$CharPredicate*>($new(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, this, p));
}

$Pattern$CharPredicate* Pattern$BmpCharPredicate::union$($Pattern$CharPredicateArray* predicates) {
	$init(Pattern$BmpCharPredicate);
	$var($Pattern$CharPredicate, cp, static_cast<$Pattern$CharPredicate*>($new(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, predicates)));
	{
		$var($Pattern$CharPredicateArray, arr$, predicates);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Pattern$CharPredicate, p, arr$->get(i$));
			{
				if (!($instanceOf(Pattern$BmpCharPredicate, p))) {
					return cp;
				}
			}
		}
	}
	return $cast(Pattern$BmpCharPredicate, cp);
}

bool Pattern$BmpCharPredicate::lambda$union$4($Pattern$CharPredicateArray* predicates, int32_t ch) {
	$init(Pattern$BmpCharPredicate);
	{
		$var($Pattern$CharPredicateArray, arr$, predicates);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Pattern$CharPredicate, p, arr$->get(i$));
			{
				if (!$nc(p)->is(ch)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool Pattern$BmpCharPredicate::lambda$union$2($Pattern$CharPredicate* p, int32_t ch) {
	bool var$0 = is(ch);
	return var$0 || $nc(p)->is(ch);
}

bool Pattern$BmpCharPredicate::lambda$and$0($Pattern$CharPredicate* p, int32_t ch) {
	bool var$0 = is(ch);
	return var$0 && $nc(p)->is(ch);
}

$Class* Pattern$BmpCharPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Pattern$BmpCharPredicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return Pattern$BmpCharPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::classInfo$.name)) {
			return Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::load$(name, initialize);
		}
		if (name->equals(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::classInfo$.name)) {
			return Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::load$(name, initialize);
		}
	}
	$loadClass(Pattern$BmpCharPredicate, name, initialize, &_Pattern$BmpCharPredicate_ClassInfo_, allocate$Pattern$BmpCharPredicate);
	return class$;
}

$Class* Pattern$BmpCharPredicate::class$ = nullptr;

		} // regex
	} // util
} // java