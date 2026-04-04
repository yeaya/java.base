#include <java/util/regex/Pattern$BmpCharPredicate.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $Pattern$CharPredicateArray = $Array<::java::util::regex::Pattern$CharPredicate>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
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
	Pattern$BmpCharPredicate* inst$ = nullptr;
	$Pattern$CharPredicate* p = nullptr;
};
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, inst$)},
		{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$BmpCharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, init$, void, Pattern$BmpCharPredicate*, $Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$and$0",
		"java.lang.Object",
		"java.util.regex.Pattern$BmpCharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BmpCharPredicate$$Lambda$lambda$and$0);
	});
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
	Pattern$BmpCharPredicate* inst$ = nullptr;
	$Pattern$CharPredicate* p = nullptr;
};
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, inst$)},
		{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$BmpCharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, init$, void, Pattern$BmpCharPredicate*, $Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1",
		"java.lang.Object",
		"java.util.regex.Pattern$BmpCharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1);
	});
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
	$Pattern$CharPredicateArray* predicates = nullptr;
};
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"predicates", "[Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, predicates)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, init$, void, $Pattern$CharPredicateArray*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2",
		"java.lang.Object",
		"java.util.regex.Pattern$CharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2);
	});
	return class$;
}
$Class* Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::class$ = nullptr;

$Pattern$CharPredicate* Pattern$BmpCharPredicate::and$($Pattern$CharPredicate* p) {
	if ($instanceOf(Pattern$BmpCharPredicate, p)) {
		return ($cast(Pattern$BmpCharPredicate, $new(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, this, p)));
	}
	return $new(Pattern$BmpCharPredicate$$Lambda$lambda$and$0, this, p);
}

$Pattern$CharPredicate* Pattern$BmpCharPredicate::union$($Pattern$CharPredicate* p) {
	if ($instanceOf(Pattern$BmpCharPredicate, p)) {
		return ($cast(Pattern$BmpCharPredicate, $new(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, this, p)));
	}
	return $new(Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1, this, p);
}

$Pattern$CharPredicate* Pattern$BmpCharPredicate::union$($Pattern$CharPredicateArray* predicates) {
	$init(Pattern$BmpCharPredicate);
	$useLocalObjectStack();
	$var($Pattern$CharPredicate, cp, $new(Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2, predicates));
	{
		$var($Pattern$CharPredicateArray, arr$, predicates);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Pattern$CharPredicate, p, arr$->get(i$));
			if (!($instanceOf(Pattern$BmpCharPredicate, p))) {
				return cp;
			}
		}
	}
	return $cast(Pattern$BmpCharPredicate, cp);
}

bool Pattern$BmpCharPredicate::lambda$union$4($Pattern$CharPredicateArray* predicates, int32_t ch) {
	$init(Pattern$BmpCharPredicate);
	$useLocalObjectStack();
	$var($Pattern$CharPredicateArray, arr$, predicates);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Pattern$CharPredicate, p, arr$->get(i$));
		if (!$nc(p)->is(ch)) {
			return false;
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
		if (name->equals("java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$and$0")) {
			return Pattern$BmpCharPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals("java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1")) {
			return Pattern$BmpCharPredicate$$Lambda$lambda$union$2$1::load$(name, initialize);
		}
		if (name->equals("java.util.regex.Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2")) {
			return Pattern$BmpCharPredicate$$Lambda$lambda$union$4$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"and", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $virtualMethod(Pattern$BmpCharPredicate, and$, $Pattern$CharPredicate*, $Pattern$CharPredicate*)},
		{"lambda$and$0", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Pattern$BmpCharPredicate, lambda$and$0, bool, $Pattern$CharPredicate*, int32_t)},
		{"lambda$union$2", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Pattern$BmpCharPredicate, lambda$union$2, bool, $Pattern$CharPredicate*, int32_t)},
		{"lambda$union$4", "([Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Pattern$BmpCharPredicate, lambda$union$4, bool, $Pattern$CharPredicateArray*, int32_t)},
		{"union", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $virtualMethod(Pattern$BmpCharPredicate, union$, $Pattern$CharPredicate*, $Pattern$CharPredicate*)},
		{"union", "([Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Pattern$BmpCharPredicate, union$, $Pattern$CharPredicate*, $Pattern$CharPredicateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$BmpCharPredicate", "java.util.regex.Pattern", "BmpCharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.regex.Pattern$CharPredicate", "java.util.regex.Pattern", "CharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.regex.Pattern$BmpCharPredicate",
		nullptr,
		"java.util.regex.Pattern$CharPredicate",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$BmpCharPredicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BmpCharPredicate);
	});
	return class$;
}

$Class* Pattern$BmpCharPredicate::class$ = nullptr;

		} // regex
	} // util
} // java