#include <CollationKeyTestImpl.h>

#include <java/text/CollationKey.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN

using $CollationKeyArray = $Array<::java::text::CollationKey>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CollationKey = ::java::text::CollationKey;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$FieldInfo _CollationKeyTestImpl_FieldInfo_[] = {
	{"sourceData_ja", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CollationKeyTestImpl, sourceData_ja)},
	{"targetData_ja", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CollationKeyTestImpl, targetData_ja)},
	{}
};

$MethodInfo _CollationKeyTestImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CollationKeyTestImpl::*)($String*)>(&CollationKeyTestImpl::init$))},
	{"InsertionSort", "([Ljava/text/CollationKey;)V", nullptr, $PRIVATE, $method(static_cast<void(CollationKeyTestImpl::*)($CollationKeyArray*)>(&CollationKeyTestImpl::InsertionSort))},
	{"compareTo", "(Ljava/text/CollationKey;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getSourceString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"testConstructor", "()V", nullptr, $PRIVATE, $method(static_cast<void(CollationKeyTestImpl::*)()>(&CollationKeyTestImpl::testConstructor))},
	{"testSubclassMethods", "()V", nullptr, $PRIVATE, $method(static_cast<void(CollationKeyTestImpl::*)()>(&CollationKeyTestImpl::testSubclassMethods))},
	{"toByteArray", "()[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CollationKeyTestImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CollationKeyTestImpl",
	"java.text.CollationKey",
	nullptr,
	_CollationKeyTestImpl_FieldInfo_,
	_CollationKeyTestImpl_MethodInfo_
};

$Object* allocate$CollationKeyTestImpl($Class* clazz) {
	return $of($alloc(CollationKeyTestImpl));
}

$StringArray* CollationKeyTestImpl::sourceData_ja = nullptr;
$StringArray* CollationKeyTestImpl::targetData_ja = nullptr;

void CollationKeyTestImpl::run() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($Collator, myCollator, $Collator::getInstance($Locale::JAPAN));
	$var($CollationKeyArray, keys, $new($CollationKeyArray, $nc(CollationKeyTestImpl::sourceData_ja)->length));
	$var($CollationKeyArray, target_keys, $new($CollationKeyArray, $nc(CollationKeyTestImpl::targetData_ja)->length));
	for (int32_t i = 0; i < $nc(CollationKeyTestImpl::sourceData_ja)->length; ++i) {
		keys->set(i, $($nc(myCollator)->getCollationKey($nc(CollationKeyTestImpl::sourceData_ja)->get(i))));
		target_keys->set(i, $(myCollator->getCollationKey($nc(CollationKeyTestImpl::targetData_ja)->get(i))));
	}
	InsertionSort(keys);
	bool pass = true;
	for (int32_t i = 0; i < $nc(CollationKeyTestImpl::sourceData_ja)->length; ++i) {
		if (!$nc($nc(CollationKeyTestImpl::targetData_ja)->get(i))->equals($($nc(keys->get(i))->getSourceString()))) {
			$throwNew($RuntimeException, $$str({"FAILED: CollationKeyTest backward compatibility while comparing"_s, $nc(CollationKeyTestImpl::targetData_ja)->get(i), " vs "_s, $($nc(keys->get(i))->getSourceString())}));
		}
		if (!$nc($of(target_keys->get(i)))->equals(keys->get(i))) {
			$throwNew($RuntimeException, $$str({"FAILED: CollationKeyTest backward compatibility. Using CollationKey.equals "_s, $nc(CollationKeyTestImpl::targetData_ja)->get(i), " vs "_s, $($nc(keys->get(i))->getSourceString())}));
		}
		int32_t var$0 = $nc($of(target_keys->get(i)))->hashCode();
		if (var$0 != $nc($of(keys->get(i)))->hashCode()) {
			$throwNew($RuntimeException, $$str({"FAILED: CollationKeyTest backward compatibility. Using CollationKey.hashCode "_s, $nc(CollationKeyTestImpl::targetData_ja)->get(i), " vs "_s, $($nc(keys->get(i))->getSourceString())}));
		}
		$var($bytes, target_bytes, $nc(target_keys->get(i))->toByteArray());
		$var($bytes, source_bytes, $nc(keys->get(i))->toByteArray());
		for (int32_t j = 0; j < $nc(target_bytes)->length; ++j) {
			$var($Byte, targetByte, $new($Byte, target_bytes->get(j)));
			$var($Byte, sourceByte, $new($Byte, $nc(source_bytes)->get(j)));
			if (targetByte->compareTo(sourceByte) != 0) {
				$throwNew($RuntimeException, $$str({"FAILED: CollationKeyTest backward compatibility. Using Byte.compareTo from CollationKey.toByteArray "_s, $nc(CollationKeyTestImpl::targetData_ja)->get(i), " vs "_s, $($nc(keys->get(i))->getSourceString())}));
			}
		}
	}
	testSubclassMethods();
	testConstructor();
}

void CollationKeyTestImpl::InsertionSort($CollationKeyArray* keys) {
	int32_t f = 0;
	int32_t i = 0;
	$var($CollationKey, tmp, nullptr);
	for (f = 1; f < $nc(keys)->length; ++f) {
		if ($nc(keys->get(f))->compareTo(keys->get(f - 1)) > 0) {
			continue;
		}
		$assign(tmp, keys->get(f));
		i = f - 1;
		while ((i >= 0) && ($nc(keys->get(i))->compareTo(tmp) > 0)) {
			keys->set(i + 1, keys->get(i));
			--i;
		}
		keys->set(i + 1, tmp);
	}
}

void CollationKeyTestImpl::init$($String* str) {
	$CollationKey::init$(str);
}

$bytes* CollationKeyTestImpl::toByteArray() {
	$var($String, foo, "Hello"_s);
	return foo->getBytes();
}

int32_t CollationKeyTestImpl::compareTo($CollationKey* target) {
	return 0;
}

bool CollationKeyTestImpl::equals(Object$* target) {
	return true;
}

$String* CollationKeyTestImpl::getSourceString() {
	return "CollationKeyTestImpl"_s;
}

void CollationKeyTestImpl::testSubclassMethods() {
	$useLocalCurrentObjectStackCache();
	$var(CollationKeyTestImpl, clt1, $new(CollationKeyTestImpl, "testSubclassMethods-1"_s));
	$var(CollationKeyTestImpl, clt2, $new(CollationKeyTestImpl, "testSubclassMethods-2"_s));
	if (!clt1->equals(clt2)) {
		$throwNew($RuntimeException, "Failed: equals(CollationKeySubClass)"_s);
	}
	if (clt1->compareTo(static_cast<$CollationKey*>(clt2)) != 0) {
		$throwNew($RuntimeException, "Failed: compareTo(CollationKeySubClass)"_s);
	}
	if (!$nc($(clt1->getSourceString()))->equals("CollationKeyTestImpl"_s)) {
		$throwNew($RuntimeException, "Failed: CollationKey subclass overriding getSourceString()"_s);
	}
	$var($String, str2, $new($String, $(clt2->toByteArray())));
	if (!clt2->equals("Hello"_s)) {
		$throwNew($RuntimeException, "Failed: CollationKey subclass toByteArray()"_s);
	}
}

void CollationKeyTestImpl::testConstructor() {
	bool npe = false;
	try {
		$var(CollationKeyTestImpl, cltNull, $new(CollationKeyTestImpl, nullptr));
	} catch ($NullPointerException& npException) {
		npe = true;
	}
	if (!npe) {
		$throwNew($RuntimeException, "Failed: CollationKey Constructor with null source didn\'t throw NPE!"_s);
	}
}

int32_t CollationKeyTestImpl::compareTo(Object$* target) {
	return this->compareTo($cast($CollationKey, target));
}

void clinit$CollationKeyTestImpl($Class* class$) {
	$assignStatic(CollationKeyTestImpl::sourceData_ja, $new($StringArray, {
		u"あいうええ"_s,
		u"ぁぃぅぇぉ"_s,
		u"げござじじ"_s,
		u"けこさしす"_s,
		u"ぢつてとと"_s,
		u"ちっづでど"_s,
		u"ひぴふへへ"_s,
		u"ぱびふぷべ"_s,
		u"もやゅよよ"_s,
		u"めゃゅょら"_s,
		u"アイウエオ"_s,
		u"ァィゥェォ"_s,
		u"ヂツテトナ"_s,
		u"チッヅデド"_s,
		u"ゲゴザジズ"_s,
		u"ケコサシス"_s,
		u"ヒピブヘペ"_s,
		u"パビフプベ"_s,
		u"モヤユヨリ"_s,
		u"メャュョラ"_s
	}));
	$assignStatic(CollationKeyTestImpl::targetData_ja, $new($StringArray, {
		u"あいうええ"_s,
		u"ぁぃぅぇぉ"_s,
		u"アイウエオ"_s,
		u"ァィゥェォ"_s,
		u"げござじじ"_s,
		u"けこさしす"_s,
		u"ケコサシス"_s,
		u"ゲゴザジズ"_s,
		u"ちっづでど"_s,
		u"チッヅデド"_s,
		u"ぢつてとと"_s,
		u"ヂツテトナ"_s,
		u"ぱびふぷべ"_s,
		u"パビフプベ"_s,
		u"ひぴふへへ"_s,
		u"ヒピブヘペ"_s,
		u"めゃゅょら"_s,
		u"メャュョラ"_s,
		u"もやゅよよ"_s,
		u"モヤユヨリ"_s
	}));
}

CollationKeyTestImpl::CollationKeyTestImpl() {
}

$Class* CollationKeyTestImpl::load$($String* name, bool initialize) {
	$loadClass(CollationKeyTestImpl, name, initialize, &_CollationKeyTestImpl_ClassInfo_, clinit$CollationKeyTestImpl, allocate$CollationKeyTestImpl);
	return class$;
}

$Class* CollationKeyTestImpl::class$ = nullptr;