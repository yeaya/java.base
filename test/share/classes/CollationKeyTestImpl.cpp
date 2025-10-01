#include <CollationKeyTestImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	} catch ($NullPointerException&) {
		$var($NullPointerException, npException, $catch());
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
		u"\u3042\u3044\u3046\u3048\u3048"_s,
		u"\u3041\u3043\u3045\u3047\u3049"_s,
		u"\u3052\u3054\u3056\u3058\u3058"_s,
		u"\u3051\u3053\u3055\u3057\u3059"_s,
		u"\u3062\u3064\u3066\u3068\u3068"_s,
		u"\u3061\u3063\u3065\u3067\u3069"_s,
		u"\u3072\u3074\u3075\u3078\u3078"_s,
		u"\u3071\u3073\u3075\u3077\u3079"_s,
		u"\u3082\u3084\u3085\u3088\u3088"_s,
		u"\u3081\u3083\u3085\u3087\u3089"_s,
		u"\u30a2\u30a4\u30a6\u30a8\u30aa"_s,
		u"\u30a1\u30a3\u30a5\u30a7\u30a9"_s,
		u"\u30c2\u30c4\u30c6\u30c8\u30ca"_s,
		u"\u30c1\u30c3\u30c5\u30c7\u30c9"_s,
		u"\u30b2\u30b4\u30b6\u30b8\u30ba"_s,
		u"\u30b1\u30b3\u30b5\u30b7\u30b9"_s,
		u"\u30d2\u30d4\u30d6\u30d8\u30da"_s,
		u"\u30d1\u30d3\u30d5\u30d7\u30d9"_s,
		u"\u30e2\u30e4\u30e6\u30e8\u30ea"_s,
		u"\u30e1\u30e3\u30e5\u30e7\u30e9"_s
	}));
	$assignStatic(CollationKeyTestImpl::targetData_ja, $new($StringArray, {
		u"\u3042\u3044\u3046\u3048\u3048"_s,
		u"\u3041\u3043\u3045\u3047\u3049"_s,
		u"\u30a2\u30a4\u30a6\u30a8\u30aa"_s,
		u"\u30a1\u30a3\u30a5\u30a7\u30a9"_s,
		u"\u3052\u3054\u3056\u3058\u3058"_s,
		u"\u3051\u3053\u3055\u3057\u3059"_s,
		u"\u30b1\u30b3\u30b5\u30b7\u30b9"_s,
		u"\u30b2\u30b4\u30b6\u30b8\u30ba"_s,
		u"\u3061\u3063\u3065\u3067\u3069"_s,
		u"\u30c1\u30c3\u30c5\u30c7\u30c9"_s,
		u"\u3062\u3064\u3066\u3068\u3068"_s,
		u"\u30c2\u30c4\u30c6\u30c8\u30ca"_s,
		u"\u3071\u3073\u3075\u3077\u3079"_s,
		u"\u30d1\u30d3\u30d5\u30d7\u30d9"_s,
		u"\u3072\u3074\u3075\u3078\u3078"_s,
		u"\u30d2\u30d4\u30d6\u30d8\u30da"_s,
		u"\u3081\u3083\u3085\u3087\u3089"_s,
		u"\u30e1\u30e3\u30e5\u30e7\u30e9"_s,
		u"\u3082\u3084\u3085\u3088\u3088"_s,
		u"\u30e2\u30e4\u30e6\u30e8\u30ea"_s
	}));
}

CollationKeyTestImpl::CollationKeyTestImpl() {
}

$Class* CollationKeyTestImpl::load$($String* name, bool initialize) {
	$loadClass(CollationKeyTestImpl, name, initialize, &_CollationKeyTestImpl_ClassInfo_, clinit$CollationKeyTestImpl, allocate$CollationKeyTestImpl);
	return class$;
}

$Class* CollationKeyTestImpl::class$ = nullptr;