#include <jdk/internal/jmod/JmodFile$Entry.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $JmodFile$SectionArray = $Array<::jdk::internal::jmod::JmodFile$Section>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $JmodFile = ::jdk::internal::jmod::JmodFile;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JmodFile$Entry$$Lambda$jmodDir>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JmodFile$Entry$$Lambda$jmodDir::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JmodFile$Entry$$Lambda$jmodDir::*)()>(&JmodFile$Entry$$Lambda$jmodDir::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JmodFile$Entry$$Lambda$jmodDir::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jmod.JmodFile$Entry$$Lambda$jmodDir",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JmodFile$Entry$$Lambda$jmodDir::load$($String* name, bool initialize) {
	$loadClass(JmodFile$Entry$$Lambda$jmodDir, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JmodFile$Entry$$Lambda$jmodDir::class$ = nullptr;

$FieldInfo _JmodFile$Entry_FieldInfo_[] = {
	{"zipEntry", "Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Entry, zipEntry$)},
	{"section", "Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Entry, section$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JmodFile$Entry, name$)},
	{"NAME_TO_SECTION", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/jmod/JmodFile$Section;>;", $STATIC | $FINAL, $staticField(JmodFile$Entry, NAME_TO_SECTION)},
	{}
};

$MethodInfo _JmodFile$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/ZipEntry;)V", nullptr, $PRIVATE, $method(static_cast<void(JmodFile$Entry::*)($ZipEntry*)>(&JmodFile$Entry::init$))},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"section", "()Ljdk/internal/jmod/JmodFile$Section;", nullptr, $PUBLIC},
	{"section", "(Ljava/lang/String;)Ljdk/internal/jmod/JmodFile$Section;", nullptr, $STATIC, $method(static_cast<$JmodFile$Section*(*)($String*)>(&JmodFile$Entry::section))},
	{"size", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"zipEntry", "()Ljava/util/zip/ZipEntry;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JmodFile$Entry_InnerClassesInfo_[] = {
	{"jdk.internal.jmod.JmodFile$Entry", "jdk.internal.jmod.JmodFile", "Entry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JmodFile$Entry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jmod.JmodFile$Entry",
	"java.lang.Object",
	nullptr,
	_JmodFile$Entry_FieldInfo_,
	_JmodFile$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_JmodFile$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jmod.JmodFile"
};

$Object* allocate$JmodFile$Entry($Class* clazz) {
	return $of($alloc(JmodFile$Entry));
}

$Map* JmodFile$Entry::NAME_TO_SECTION = nullptr;

void JmodFile$Entry::init$($ZipEntry* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getName());
	int32_t i = $nc(name)->indexOf((int32_t)u'/');
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
	return $cast($JmodFile$Section, $nc(JmodFile$Entry::NAME_TO_SECTION)->get(name));
}

void clinit$JmodFile$Entry($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($Function, var$0, static_cast<$Function*>($new(JmodFile$Entry$$Lambda$jmodDir)));
	$assignStatic(JmodFile$Entry::NAME_TO_SECTION, $cast($Map, $nc($($Arrays::stream($($JmodFile$Section::values()))))->collect($($Collectors::toMap(var$0, $($Function::identity()))))));
}

JmodFile$Entry::JmodFile$Entry() {
}

$Class* JmodFile$Entry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JmodFile$Entry$$Lambda$jmodDir::classInfo$.name)) {
			return JmodFile$Entry$$Lambda$jmodDir::load$(name, initialize);
		}
	}
	$loadClass(JmodFile$Entry, name, initialize, &_JmodFile$Entry_ClassInfo_, clinit$JmodFile$Entry, allocate$JmodFile$Entry);
	return class$;
}

$Class* JmodFile$Entry::class$ = nullptr;

		} // jmod
	} // internal
} // jdk