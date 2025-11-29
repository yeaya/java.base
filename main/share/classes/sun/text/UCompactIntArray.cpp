#include <sun/text/UCompactIntArray.h>

#include <jcpp.h>

#undef BLOCKCOUNT
#undef BLOCKMASK
#undef BLOCKSHIFT
#undef CODEPOINTMASK
#undef INDEXCOUNT
#undef INDEXSHIFT
#undef PLANECOUNT
#undef PLANEMASK
#undef PLANESHIFT
#undef UNICODECOUNT

using $intArray2 = $Array<int32_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $booleanArray2 = $Array<bool, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace text {

$FieldInfo _UCompactIntArray_FieldInfo_[] = {
	{"PLANEMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, PLANEMASK)},
	{"PLANESHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, PLANESHIFT)},
	{"PLANECOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, PLANECOUNT)},
	{"CODEPOINTMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, CODEPOINTMASK)},
	{"UNICODECOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, UNICODECOUNT)},
	{"BLOCKSHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, BLOCKSHIFT)},
	{"BLOCKCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, BLOCKCOUNT)},
	{"INDEXSHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, INDEXSHIFT)},
	{"INDEXCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, INDEXCOUNT)},
	{"BLOCKMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UCompactIntArray, BLOCKMASK)},
	{"defaultValue", "I", nullptr, $PRIVATE, $field(UCompactIntArray, defaultValue)},
	{"values", "[[I", nullptr, $PRIVATE, $field(UCompactIntArray, values)},
	{"indices", "[[S", nullptr, $PRIVATE, $field(UCompactIntArray, indices)},
	{"isCompact", "Z", nullptr, $PRIVATE, $field(UCompactIntArray, isCompact)},
	{"blockTouched", "[[Z", nullptr, $PRIVATE, $field(UCompactIntArray, blockTouched)},
	{"planeTouched", "[Z", nullptr, $PRIVATE, $field(UCompactIntArray, planeTouched)},
	{}
};

$MethodInfo _UCompactIntArray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UCompactIntArray::*)()>(&UCompactIntArray::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(UCompactIntArray::*)(int32_t)>(&UCompactIntArray::init$))},
	{"compact", "()V", nullptr, $PUBLIC, $method(static_cast<void(UCompactIntArray::*)()>(&UCompactIntArray::compact))},
	{"elementAt", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(UCompactIntArray::*)(int32_t)>(&UCompactIntArray::elementAt))},
	{"expand", "()V", nullptr, $PRIVATE, $method(static_cast<void(UCompactIntArray::*)()>(&UCompactIntArray::expand))},
	{"getKSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(UCompactIntArray::*)()>(&UCompactIntArray::getKSize))},
	{"initPlane", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(UCompactIntArray::*)(int32_t)>(&UCompactIntArray::initPlane))},
	{"setElementAt", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(UCompactIntArray::*)(int32_t,int32_t)>(&UCompactIntArray::setElementAt))},
	{}
};

$ClassInfo _UCompactIntArray_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.text.UCompactIntArray",
	"java.lang.Object",
	"java.lang.Cloneable",
	_UCompactIntArray_FieldInfo_,
	_UCompactIntArray_MethodInfo_
};

$Object* allocate$UCompactIntArray($Class* clazz) {
	return $of($alloc(UCompactIntArray));
}

void UCompactIntArray::init$() {
	$set(this, values, $new($intArray2, 16));
	$set(this, indices, $new($shortArray2, 16));
	$set(this, blockTouched, $new($booleanArray2, 16));
	$set(this, planeTouched, $new($booleans, 16));
}

void UCompactIntArray::init$(int32_t defaultValue) {
	UCompactIntArray::init$();
	this->defaultValue = defaultValue;
}

int32_t UCompactIntArray::elementAt(int32_t index) {
	int32_t plane = $sr((int32_t)(index & (uint32_t)UCompactIntArray::PLANEMASK), UCompactIntArray::PLANESHIFT);
	if (!$nc(this->planeTouched)->get(plane)) {
		return this->defaultValue;
	}
	index &= (uint32_t)UCompactIntArray::CODEPOINTMASK;
	return $nc($nc(this->values)->get(plane))->get(((int32_t)($nc($nc(this->indices)->get(plane))->get($sr(index, UCompactIntArray::BLOCKSHIFT)) & (uint32_t)0x0000FFFF)) + ((int32_t)(index & (uint32_t)UCompactIntArray::BLOCKMASK)));
}

void UCompactIntArray::setElementAt(int32_t index, int32_t value) {
	if (this->isCompact) {
		expand();
	}
	int32_t plane = $sr((int32_t)(index & (uint32_t)UCompactIntArray::PLANEMASK), UCompactIntArray::PLANESHIFT);
	if (!$nc(this->planeTouched)->get(plane)) {
		initPlane(plane);
	}
	index &= (uint32_t)UCompactIntArray::CODEPOINTMASK;
	$nc($nc(this->values)->get(plane))->set(index, value);
	$nc($nc(this->blockTouched)->get(plane))->set($sr(index, UCompactIntArray::BLOCKSHIFT), true);
}

void UCompactIntArray::compact() {
	$useLocalCurrentObjectStackCache();
	if (this->isCompact) {
		return;
	}
	for (int32_t plane = 0; plane < UCompactIntArray::PLANECOUNT; ++plane) {
		if (!$nc(this->planeTouched)->get(plane)) {
			continue;
		}
		int32_t limitCompacted = 0;
		int32_t iBlockStart = 0;
		int16_t iUntouched = (int16_t)-1;
		for (int32_t i = 0; i < $nc($nc(this->indices)->get(plane))->length; ++i, iBlockStart += UCompactIntArray::BLOCKCOUNT) {
			$nc($nc(this->indices)->get(plane))->set(i, (int16_t)-1);
			if (!$nc($nc(this->blockTouched)->get(plane))->get(i) && iUntouched != -1) {
				$nc($nc(this->indices)->get(plane))->set(i, iUntouched);
			} else {
				int32_t jBlockStart = limitCompacted * UCompactIntArray::BLOCKCOUNT;
				if (i > limitCompacted) {
					$System::arraycopy($nc(this->values)->get(plane), iBlockStart, $nc(this->values)->get(plane), jBlockStart, UCompactIntArray::BLOCKCOUNT);
				}
				if (!$nc($nc(this->blockTouched)->get(plane))->get(i)) {
					iUntouched = (int16_t)jBlockStart;
				}
				$nc($nc(this->indices)->get(plane))->set(i, (int16_t)jBlockStart);
				++limitCompacted;
			}
		}
		int32_t newSize = limitCompacted * UCompactIntArray::BLOCKCOUNT;
		$var($ints, result, $new($ints, newSize));
		$System::arraycopy($nc(this->values)->get(plane), 0, result, 0, newSize);
		$nc(this->values)->set(plane, result);
		$nc(this->blockTouched)->set(plane, nullptr);
	}
	this->isCompact = true;
}

void UCompactIntArray::expand() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	if (this->isCompact) {
		$var($ints, tempArray, nullptr);
		for (int32_t plane = 0; plane < UCompactIntArray::PLANECOUNT; ++plane) {
			if (!$nc(this->planeTouched)->get(plane)) {
				continue;
			}
			$nc(this->blockTouched)->set(plane, $$new($booleans, UCompactIntArray::INDEXCOUNT));
			$assign(tempArray, $new($ints, UCompactIntArray::UNICODECOUNT));
			for (i = 0; i < UCompactIntArray::UNICODECOUNT; ++i) {
				tempArray->set(i, $nc($nc(this->values)->get(plane))->get((int32_t)($nc($nc(this->indices)->get(plane))->get($sr(i, UCompactIntArray::BLOCKSHIFT)) & (uint32_t)(0x0000FFFF + ((int32_t)(i & (uint32_t)UCompactIntArray::BLOCKMASK))))));
				$nc($nc(this->blockTouched)->get(plane))->set($sr(i, UCompactIntArray::BLOCKSHIFT), true);
			}
			for (i = 0; i < UCompactIntArray::INDEXCOUNT; ++i) {
				$nc($nc(this->indices)->get(plane))->set(i, (int16_t)($sl(i, UCompactIntArray::BLOCKSHIFT)));
			}
			$nc(this->values)->set(plane, tempArray);
		}
		this->isCompact = false;
	}
}

void UCompactIntArray::initPlane(int32_t plane) {
	$useLocalCurrentObjectStackCache();
	$nc(this->values)->set(plane, $$new($ints, UCompactIntArray::UNICODECOUNT));
	$nc(this->indices)->set(plane, $$new($shorts, UCompactIntArray::INDEXCOUNT));
	$nc(this->blockTouched)->set(plane, $$new($booleans, UCompactIntArray::INDEXCOUNT));
	$nc(this->planeTouched)->set(plane, true);
	if ($nc(this->planeTouched)->get(0) && plane != 0) {
		$System::arraycopy($nc(this->indices)->get(0), 0, $nc(this->indices)->get(plane), 0, UCompactIntArray::INDEXCOUNT);
	} else {
		for (int32_t i = 0; i < UCompactIntArray::INDEXCOUNT; ++i) {
			$nc($nc(this->indices)->get(plane))->set(i, (int16_t)($sl(i, UCompactIntArray::BLOCKSHIFT)));
		}
	}
	for (int32_t i = 0; i < UCompactIntArray::UNICODECOUNT; ++i) {
		$nc($nc(this->values)->get(plane))->set(i, this->defaultValue);
	}
}

int32_t UCompactIntArray::getKSize() {
	int32_t size = 0;
	for (int32_t plane = 0; plane < UCompactIntArray::PLANECOUNT; ++plane) {
		if ($nc(this->planeTouched)->get(plane)) {
			size += ($nc($nc(this->values)->get(plane))->length * 4 + $nc($nc(this->indices)->get(plane))->length * 2);
		}
	}
	return size / 1024;
}

UCompactIntArray::UCompactIntArray() {
}

$Class* UCompactIntArray::load$($String* name, bool initialize) {
	$loadClass(UCompactIntArray, name, initialize, &_UCompactIntArray_ClassInfo_, allocate$UCompactIntArray);
	return class$;
}

$Class* UCompactIntArray::class$ = nullptr;

	} // text
} // sun