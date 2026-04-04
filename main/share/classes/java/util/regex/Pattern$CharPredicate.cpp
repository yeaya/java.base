#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace java {
	namespace util {
		namespace regex {

class Pattern$CharPredicate$$Lambda$lambda$and$0 : public Pattern$CharPredicate {
	$class(Pattern$CharPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, Pattern$CharPredicate)
public:
	void init$(Pattern$CharPredicate* inst, Pattern$CharPredicate* p) {
		$set(this, inst$, inst);
		$set(this, p, p);
	}
	virtual bool is(int32_t ch) override {
		 return $nc(inst$)->lambda$and$0(p, ch);
	}
	Pattern$CharPredicate* inst$ = nullptr;
	Pattern$CharPredicate* p = nullptr;
};
$Class* Pattern$CharPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$and$0, inst$)},
		{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$and$0, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$CharPredicate$$Lambda$lambda$and$0, init$, void, Pattern$CharPredicate*, Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate$$Lambda$lambda$and$0, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$and$0",
		"java.lang.Object",
		"java.util.regex.Pattern$CharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$CharPredicate$$Lambda$lambda$and$0);
	});
	return class$;
}
$Class* Pattern$CharPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class Pattern$CharPredicate$$Lambda$lambda$union$1$1 : public Pattern$CharPredicate {
	$class(Pattern$CharPredicate$$Lambda$lambda$union$1$1, $NO_CLASS_INIT, Pattern$CharPredicate)
public:
	void init$(Pattern$CharPredicate* inst, Pattern$CharPredicate* p) {
		$set(this, inst$, inst);
		$set(this, p, p);
	}
	virtual bool is(int32_t ch) override {
		 return $nc(inst$)->lambda$union$1(p, ch);
	}
	Pattern$CharPredicate* inst$ = nullptr;
	Pattern$CharPredicate* p = nullptr;
};
$Class* Pattern$CharPredicate$$Lambda$lambda$union$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$1$1, inst$)},
		{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$1$1, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$CharPredicate$$Lambda$lambda$union$1$1, init$, void, Pattern$CharPredicate*, Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate$$Lambda$lambda$union$1$1, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$union$1$1",
		"java.lang.Object",
		"java.util.regex.Pattern$CharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$union$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$CharPredicate$$Lambda$lambda$union$1$1);
	});
	return class$;
}
$Class* Pattern$CharPredicate$$Lambda$lambda$union$1$1::class$ = nullptr;

class Pattern$CharPredicate$$Lambda$lambda$union$2$2 : public Pattern$CharPredicate {
	$class(Pattern$CharPredicate$$Lambda$lambda$union$2$2, $NO_CLASS_INIT, Pattern$CharPredicate)
public:
	void init$(Pattern$CharPredicate* inst, Pattern$CharPredicate* p1, Pattern$CharPredicate* p2) {
		$set(this, inst$, inst);
		$set(this, p1, p1);
		$set(this, p2, p2);
	}
	virtual bool is(int32_t ch) override {
		 return $nc(inst$)->lambda$union$2(p1, p2, ch);
	}
	Pattern$CharPredicate* inst$ = nullptr;
	Pattern$CharPredicate* p1 = nullptr;
	Pattern$CharPredicate* p2 = nullptr;
};
$Class* Pattern$CharPredicate$$Lambda$lambda$union$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$2$2, inst$)},
		{"p1", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$2$2, p1)},
		{"p2", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$2$2, p2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$CharPredicate$$Lambda$lambda$union$2$2, init$, void, Pattern$CharPredicate*, Pattern$CharPredicate*, Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate$$Lambda$lambda$union$2$2, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$union$2$2",
		"java.lang.Object",
		"java.util.regex.Pattern$CharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$union$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$CharPredicate$$Lambda$lambda$union$2$2);
	});
	return class$;
}
$Class* Pattern$CharPredicate$$Lambda$lambda$union$2$2::class$ = nullptr;

class Pattern$CharPredicate$$Lambda$lambda$negate$3$3 : public Pattern$CharPredicate {
	$class(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, $NO_CLASS_INIT, Pattern$CharPredicate)
public:
	void init$(Pattern$CharPredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool is(int32_t ch) override {
		 return $nc(inst$)->lambda$negate$3(ch);
	}
	Pattern$CharPredicate* inst$ = nullptr;
};
$Class* Pattern$CharPredicate$$Lambda$lambda$negate$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, init$, void, Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, is, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$negate$3$3",
		"java.lang.Object",
		"java.util.regex.Pattern$CharPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$CharPredicate$$Lambda$lambda$negate$3$3);
	});
	return class$;
}
$Class* Pattern$CharPredicate$$Lambda$lambda$negate$3$3::class$ = nullptr;

Pattern$CharPredicate* Pattern$CharPredicate::and$(Pattern$CharPredicate* p) {
	return $new(Pattern$CharPredicate$$Lambda$lambda$and$0, this, p);
}

Pattern$CharPredicate* Pattern$CharPredicate::union$(Pattern$CharPredicate* p) {
	return $new(Pattern$CharPredicate$$Lambda$lambda$union$1$1, this, p);
}

Pattern$CharPredicate* Pattern$CharPredicate::union$(Pattern$CharPredicate* p1, Pattern$CharPredicate* p2) {
	return $new(Pattern$CharPredicate$$Lambda$lambda$union$2$2, this, p1, p2);
}

Pattern$CharPredicate* Pattern$CharPredicate::negate() {
	return $new(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, this);
}

bool Pattern$CharPredicate::lambda$negate$3(int32_t ch) {
	return !is(ch);
}

bool Pattern$CharPredicate::lambda$union$2(Pattern$CharPredicate* p1, Pattern$CharPredicate* p2, int32_t ch) {
	bool var$1 = is(ch);
	bool var$0 = var$1 || $nc(p1)->is(ch);
	return var$0 || $nc(p2)->is(ch);
}

bool Pattern$CharPredicate::lambda$union$1(Pattern$CharPredicate* p, int32_t ch) {
	bool var$0 = is(ch);
	return var$0 || $nc(p)->is(ch);
}

bool Pattern$CharPredicate::lambda$and$0(Pattern$CharPredicate* p, int32_t ch) {
	bool var$0 = is(ch);
	return var$0 && $nc(p)->is(ch);
}

$Class* Pattern$CharPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.regex.Pattern$CharPredicate$$Lambda$lambda$and$0")) {
			return Pattern$CharPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals("java.util.regex.Pattern$CharPredicate$$Lambda$lambda$union$1$1")) {
			return Pattern$CharPredicate$$Lambda$lambda$union$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.regex.Pattern$CharPredicate$$Lambda$lambda$union$2$2")) {
			return Pattern$CharPredicate$$Lambda$lambda$union$2$2::load$(name, initialize);
		}
		if (name->equals("java.util.regex.Pattern$CharPredicate$$Lambda$lambda$negate$3$3")) {
			return Pattern$CharPredicate$$Lambda$lambda$negate$3$3::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"and", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate, and$, Pattern$CharPredicate*, Pattern$CharPredicate*)},
		{"is", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pattern$CharPredicate, is, bool, int32_t)},
		{"lambda$and$0", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Pattern$CharPredicate, lambda$and$0, bool, Pattern$CharPredicate*, int32_t)},
		{"lambda$negate$3", "(I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Pattern$CharPredicate, lambda$negate$3, bool, int32_t)},
		{"lambda$union$1", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Pattern$CharPredicate, lambda$union$1, bool, Pattern$CharPredicate*, int32_t)},
		{"lambda$union$2", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Pattern$CharPredicate, lambda$union$2, bool, Pattern$CharPredicate*, Pattern$CharPredicate*, int32_t)},
		{"negate", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate, negate, Pattern$CharPredicate*)},
		{"union", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate, union$, Pattern$CharPredicate*, Pattern$CharPredicate*)},
		{"union", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $virtualMethod(Pattern$CharPredicate, union$, Pattern$CharPredicate*, Pattern$CharPredicate*, Pattern$CharPredicate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$CharPredicate", "java.util.regex.Pattern", "CharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.regex.Pattern$CharPredicate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$CharPredicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$CharPredicate);
	});
	return class$;
}

$Class* Pattern$CharPredicate::class$ = nullptr;

		} // regex
	} // util
} // java