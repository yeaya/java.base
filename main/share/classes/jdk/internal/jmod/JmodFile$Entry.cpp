#include <jdk/internal/jmod/JmodFile$Entry.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <jdk/internal/jmod/JmodFile$Section.h>
#include <jdk/internal/jmod/JmodFile.h>
#include <jcpp.h>

#undef NAME_TO_SECTION

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $JmodFile$Section = ::jdk::internal::jmod::JmodFile$Section;

namespace jdk {
	namespace internal {
		namespace jmod {

class JmodFile$Entry$$Lambda$jmodDir : public $Function {
	$class(JmodFile$Entry$$Lambda$jmodDir, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($JmodFile$Section, inst$)->jmodDir());
	}
};
$Class* JmodFile$Entry$$Lambda$jmodDir::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JmodFile$Entry$$Lambda$jmodDir, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry$$Lambda$jmodDir, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jmod.JmodFile$Entry$$Lambda$jmodDir",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JmodFile$Entry$$Lambda$jmodDir, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JmodFile$Entry$$Lambda$jmodDir);
	});
	return class$;
}
$Class* JmodFile$Entry$$Lambda$jmodDir::class$ = nullptr;

$Map* JmodFile$Entry::NAME_TO_SECTION = nullptr;

void JmodFile$Entry::init$($ZipEntry* e) {
	$useLocalObjectStack();
	$var($String, name, $nc(e)->getName());
	int32_t i = $nc(name)->indexOf(u'/');
	if (i <= 1) {
		$throwNew($RuntimeException, $$str({"invalid jmod entry: "_s, name}));
	}
	$set(this, zipEntry$, e);
	$set(this, section$, section($(name->substring(0, i))));
	$set(this, name$, name->substring(i + 1));
}

$JmodFile$Section* JmodFile$Entry::section() {
	return this->section$;
}

$String* JmodFile$Entry::name() {
	return this->name$;
}

bool JmodFile$Entry::isDirectory() {
	return $nc(this->zipEntry$)->isDirectory();
}

int64_t JmodFile$Entry::size() {
	return $nc(this->zipEntry$)->getSize();
}

$ZipEntry* JmodFile$Entry::zipEntry() {
	return this->zipEntry$;
}

$String* JmodFile$Entry::toString() {
	return $str({$(this->section$->jmodDir()), "/"_s, this->name$});
}

$JmodFile$Section* JmodFile$Entry::section($String* name) {
	$init(JmodFile$Entry);
	if (!$nc(JmodFile$Entry::NAME_TO_SECTION)->containsKey(name)) {
		$throwNew($IllegalArgumentException, $$str({"invalid section: "_s, name}));
	}
	return $cast($JmodFile$Section, JmodFile$Entry::NAME_TO_SECTION->get(name));
}

void JmodFile$Entry::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$var($Function, var$0, $new(JmodFile$Entry$$Lambda$jmodDir));
	$assignStatic(JmodFile$Entry::NAME_TO_SECTION, $cast($Map, $$nc($Arrays::stream($($JmodFile$Section::values())))->collect($($Collectors::toMap(var$0, $($Function::identity()))))));
}

JmodFile$Entry::JmodFile$Entry() {
}

$Class* JmodFile$Entry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.jmod.JmodFile$Entry$$Lambda$jmodDir")) {
			return JmodFile$Entry$$Lambda$jmodDir::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"zipEntry", "Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Entry, zipEntry$)},
		{"section", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Entry, section$)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Entry, name$)},
		{"NAME_TO_SECTION", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/jmod/JmodFile$Section;>;", $STATIC | $FINAL, $staticField(JmodFile$Entry, NAME_TO_SECTION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipEntry;)V", nullptr, $PRIVATE, $method(JmodFile$Entry, init$, void, $ZipEntry*)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry, isDirectory, bool)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry, name, $String*)},
		{"section", "()Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry, section, $JmodFile$Section*)},
		{"section", "(Ljava/lang/String;)Ljdk/internal/jmod/JmodFile$Section;", nullptr, $STATIC, $staticMethod(JmodFile$Entry, section, $JmodFile$Section*, $String*)},
		{"size", "()J", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry, size, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry, toString, $String*)},
		{"zipEntry", "()Ljava/util/zip/ZipEntry;", nullptr, $PUBLIC, $virtualMethod(JmodFile$Entry, zipEntry, $ZipEntry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jmod.JmodFile$Entry", "jdk.internal.jmod.JmodFile", "Entry", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.jmod.JmodFile$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jmod.JmodFile"
	};
	$loadClass(JmodFile$Entry, name, initialize, &classInfo$$, JmodFile$Entry::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JmodFile$Entry);
	});
	return class$;
}

$Class* JmodFile$Entry::class$ = nullptr;

		} // jmod
	} // internal
} // jdk