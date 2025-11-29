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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$CharPredicate$$Lambda$lambda$and$0>());
	}
	Pattern$CharPredicate* inst$ = nullptr;
	Pattern$CharPredicate* p = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$CharPredicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$and$0, inst$)},
	{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$and$0, p)},
	{}
};
$MethodInfo Pattern$CharPredicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$CharPredicate$$Lambda$lambda$and$0::*)(Pattern$CharPredicate*,Pattern$CharPredicate*)>(&Pattern$CharPredicate$$Lambda$lambda$and$0::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$CharPredicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$CharPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$CharPredicate$$Lambda$lambda$union$1$1>());
	}
	Pattern$CharPredicate* inst$ = nullptr;
	Pattern$CharPredicate* p = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$CharPredicate$$Lambda$lambda$union$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$1$1, inst$)},
	{"p", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$1$1, p)},
	{}
};
$MethodInfo Pattern$CharPredicate$$Lambda$lambda$union$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$CharPredicate$$Lambda$lambda$union$1$1::*)(Pattern$CharPredicate*,Pattern$CharPredicate*)>(&Pattern$CharPredicate$$Lambda$lambda$union$1$1::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$CharPredicate$$Lambda$lambda$union$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$union$1$1",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$CharPredicate$$Lambda$lambda$union$1$1::load$($String* name, bool initialize) {
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$union$1$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$CharPredicate$$Lambda$lambda$union$2$2>());
	}
	Pattern$CharPredicate* inst$ = nullptr;
	Pattern$CharPredicate* p1 = nullptr;
	Pattern$CharPredicate* p2 = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$CharPredicate$$Lambda$lambda$union$2$2::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$2$2, inst$)},
	{"p1", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$2$2, p1)},
	{"p2", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$union$2$2, p2)},
	{}
};
$MethodInfo Pattern$CharPredicate$$Lambda$lambda$union$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$CharPredicate$$Lambda$lambda$union$2$2::*)(Pattern$CharPredicate*,Pattern$CharPredicate*,Pattern$CharPredicate*)>(&Pattern$CharPredicate$$Lambda$lambda$union$2$2::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$CharPredicate$$Lambda$lambda$union$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$union$2$2",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$CharPredicate$$Lambda$lambda$union$2$2::load$($String* name, bool initialize) {
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$union$2$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Pattern$CharPredicate$$Lambda$lambda$negate$3$3>());
	}
	Pattern$CharPredicate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Pattern$CharPredicate$$Lambda$lambda$negate$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, inst$)},
	{}
};
$MethodInfo Pattern$CharPredicate$$Lambda$lambda$negate$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Pattern$CharPredicate$$Lambda$lambda$negate$3$3::*)(Pattern$CharPredicate*)>(&Pattern$CharPredicate$$Lambda$lambda$negate$3$3::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Pattern$CharPredicate$$Lambda$lambda$negate$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.Pattern$CharPredicate$$Lambda$lambda$negate$3$3",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* Pattern$CharPredicate$$Lambda$lambda$negate$3$3::load$($String* name, bool initialize) {
	$loadClass(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Pattern$CharPredicate$$Lambda$lambda$negate$3$3::class$ = nullptr;

$CompoundAttribute _Pattern$CharPredicate_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _Pattern$CharPredicate_MethodInfo_[] = {
	{"and", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC},
	{"is", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$and$0", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Pattern$CharPredicate::*)(Pattern$CharPredicate*,int32_t)>(&Pattern$CharPredicate::lambda$and$0))},
	{"lambda$negate$3", "(I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Pattern$CharPredicate::*)(int32_t)>(&Pattern$CharPredicate::lambda$negate$3))},
	{"lambda$union$1", "(Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Pattern$CharPredicate::*)(Pattern$CharPredicate*,int32_t)>(&Pattern$CharPredicate::lambda$union$1))},
	{"lambda$union$2", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Pattern$CharPredicate::*)(Pattern$CharPredicate*,Pattern$CharPredicate*,int32_t)>(&Pattern$CharPredicate::lambda$union$2))},
	{"negate", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC},
	{"union", "(Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC},
	{"union", "(Ljava/util/regex/Pattern$CharPredicate;Ljava/util/regex/Pattern$CharPredicate;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Pattern$CharPredicate_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$CharPredicate", "java.util.regex.Pattern", "CharPredicate", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Pattern$CharPredicate_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	nullptr,
	nullptr,
	_Pattern$CharPredicate_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$CharPredicate_InnerClassesInfo_,
	_Pattern$CharPredicate_Annotations_,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$CharPredicate($Class* clazz) {
	return $of($alloc(Pattern$CharPredicate));
}

Pattern$CharPredicate* Pattern$CharPredicate::and$(Pattern$CharPredicate* p) {
	return static_cast<Pattern$CharPredicate*>($new(Pattern$CharPredicate$$Lambda$lambda$and$0, this, p));
}

Pattern$CharPredicate* Pattern$CharPredicate::union$(Pattern$CharPredicate* p) {
	return static_cast<Pattern$CharPredicate*>($new(Pattern$CharPredicate$$Lambda$lambda$union$1$1, this, p));
}

Pattern$CharPredicate* Pattern$CharPredicate::union$(Pattern$CharPredicate* p1, Pattern$CharPredicate* p2) {
	return static_cast<Pattern$CharPredicate*>($new(Pattern$CharPredicate$$Lambda$lambda$union$2$2, this, p1, p2));
}

Pattern$CharPredicate* Pattern$CharPredicate::negate() {
	return static_cast<Pattern$CharPredicate*>($new(Pattern$CharPredicate$$Lambda$lambda$negate$3$3, this));
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
		if (name->equals(Pattern$CharPredicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return Pattern$CharPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(Pattern$CharPredicate$$Lambda$lambda$union$1$1::classInfo$.name)) {
			return Pattern$CharPredicate$$Lambda$lambda$union$1$1::load$(name, initialize);
		}
		if (name->equals(Pattern$CharPredicate$$Lambda$lambda$union$2$2::classInfo$.name)) {
			return Pattern$CharPredicate$$Lambda$lambda$union$2$2::load$(name, initialize);
		}
		if (name->equals(Pattern$CharPredicate$$Lambda$lambda$negate$3$3::classInfo$.name)) {
			return Pattern$CharPredicate$$Lambda$lambda$negate$3$3::load$(name, initialize);
		}
	}
	$loadClass(Pattern$CharPredicate, name, initialize, &_Pattern$CharPredicate_ClassInfo_, allocate$Pattern$CharPredicate);
	return class$;
}

$Class* Pattern$CharPredicate::class$ = nullptr;

		} // regex
	} // util
} // java