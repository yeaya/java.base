#include <Bug8209047.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/DateFormat.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef FULL
#undef LONG
#undef MEDIUM
#undef SHORT

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DateFormat = ::java::text::DateFormat;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;

class Bug8209047$$Lambda$lambda$main$1 : public $Consumer {
	$class(Bug8209047$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Set* styles) {
		$set(this, styles, styles);
	}
	virtual void accept(Object$* locale) override {
		Bug8209047::lambda$main$1(styles, $cast($Locale, locale));
	}
	$Set* styles = nullptr;
};
$Class* Bug8209047$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"styles", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Bug8209047$$Lambda$lambda$main$1, styles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(Bug8209047$$Lambda$lambda$main$1, init$, void, $Set*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Bug8209047$$Lambda$lambda$main$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Bug8209047$$Lambda$lambda$main$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug8209047$$Lambda$lambda$main$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8209047$$Lambda$lambda$main$1);
	});
	return class$;
}
$Class* Bug8209047$$Lambda$lambda$main$1::class$ = nullptr;

class Bug8209047$$Lambda$lambda$main$0$1 : public $Consumer {
	$class(Bug8209047$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Locale* locale) {
		$set(this, locale, locale);
	}
	virtual void accept(Object$* style) override {
		Bug8209047::lambda$main$0(locale, $cast($Integer, style));
	}
	$Locale* locale = nullptr;
};
$Class* Bug8209047$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"locale", "Ljava/util/Locale;", nullptr, $PUBLIC, $field(Bug8209047$$Lambda$lambda$main$0$1, locale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(Bug8209047$$Lambda$lambda$main$0$1, init$, void, $Locale*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Bug8209047$$Lambda$lambda$main$0$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Bug8209047$$Lambda$lambda$main$0$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug8209047$$Lambda$lambda$main$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8209047$$Lambda$lambda$main$0$1);
	});
	return class$;
}
$Class* Bug8209047$$Lambda$lambda$main$0$1::class$ = nullptr;

void Bug8209047::init$() {
}

void Bug8209047::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Object, var$0, $Integer::valueOf($DateFormat::FULL));
	$var($Object, var$1, $Integer::valueOf($DateFormat::LONG));
	$var($Object, var$2, $Integer::valueOf($DateFormat::MEDIUM));
	$var($Set, styles, $Set::of(var$0, var$1, var$2, $($Integer::valueOf($DateFormat::SHORT))));
	$$nc($Arrays::stream($($Locale::getAvailableLocales())))->forEach($$new(Bug8209047$$Lambda$lambda$main$1, styles));
}

void Bug8209047::lambda$main$1($Set* styles, $Locale* locale) {
	$nc(styles)->forEach($$new(Bug8209047$$Lambda$lambda$main$0$1, locale));
}

void Bug8209047::lambda$main$0($Locale* locale, $Integer* style) {
	try {
		$DateFormat::getDateInstance($nc(style)->intValue(), locale);
		$DateFormat::getTimeInstance(style->intValue(), locale);
		int32_t var$0 = style->intValue();
		$DateFormat::getDateTimeInstance(var$0, style->intValue(), locale);
	} catch ($IllegalArgumentException& ex) {
		$throwNew($RuntimeException, $$str({"Getting DateFormat instance failed for locale "_s, locale}), ex);
	}
}

Bug8209047::Bug8209047() {
}

$Class* Bug8209047::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Bug8209047$$Lambda$lambda$main$1")) {
			return Bug8209047$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals("Bug8209047$$Lambda$lambda$main$0$1")) {
			return Bug8209047$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8209047, init$, void)},
		{"lambda$main$0", "(Ljava/util/Locale;Ljava/lang/Integer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Bug8209047, lambda$main$0, void, $Locale*, $Integer*)},
		{"lambda$main$1", "(Ljava/util/Set;Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Bug8209047, lambda$main$1, void, $Set*, $Locale*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8209047, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug8209047",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8209047, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8209047);
	});
	return class$;
}

$Class* Bug8209047::class$ = nullptr;