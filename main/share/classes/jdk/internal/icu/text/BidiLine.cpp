#include <jdk/internal/icu/text/BidiLine.h>

#include <java/lang/IllegalStateException.h>
#include <java/text/Bidi.h>
#include <java/util/Arrays.h>
#include <jdk/internal/icu/text/BidiBase$InsertPoints.h>
#include <jdk/internal/icu/text/BidiBase$Point.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jdk/internal/icu/text/BidiRun.h>
#include <jcpp.h>

#undef B
#undef DIRECTION_LEFT_TO_RIGHT
#undef DIRECTION_RIGHT_TO_LEFT
#undef LRM_AFTER
#undef LRM_BEFORE
#undef MAP_NOWHERE
#undef MASK_WS
#undef MAX_EXPLICIT_LEVEL
#undef MIXED
#undef RLM_AFTER
#undef RLM_BEFORE

using $BidiBase$PointArray = $Array<::jdk::internal::icu::text::BidiBase$Point>;
using $BidiRunArray = $Array<::jdk::internal::icu::text::BidiRun>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bidi = ::java::text::Bidi;
using $Arrays = ::java::util::Arrays;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;
using $BidiBase$InsertPoints = ::jdk::internal::icu::text::BidiBase$InsertPoints;
using $BidiBase$Point = ::jdk::internal::icu::text::BidiBase$Point;
using $BidiRun = ::jdk::internal::icu::text::BidiRun;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$MethodInfo _BidiLine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiLine::*)()>(&BidiLine::init$))},
	{"getLevelAt", "(Ljdk/internal/icu/text/BidiBase;I)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($BidiBase*,int32_t)>(&BidiLine::getLevelAt))},
	{"getLevels", "(Ljdk/internal/icu/text/BidiBase;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($BidiBase*)>(&BidiLine::getLevels))},
	{"getRunFromLogicalIndex", "(Ljdk/internal/icu/text/BidiBase;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($BidiBase*,int32_t)>(&BidiLine::getRunFromLogicalIndex))},
	{"getRuns", "(Ljdk/internal/icu/text/BidiBase;)V", nullptr, $STATIC, $method(static_cast<void(*)($BidiBase*)>(&BidiLine::getRuns))},
	{"getSingleRun", "(Ljdk/internal/icu/text/BidiBase;B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BidiBase*,int8_t)>(&BidiLine::getSingleRun))},
	{"getVisualMap", "(Ljdk/internal/icu/text/BidiBase;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($BidiBase*)>(&BidiLine::getVisualMap))},
	{"getVisualRun", "(Ljdk/internal/icu/text/BidiBase;I)Ljdk/internal/icu/text/BidiRun;", nullptr, $STATIC, $method(static_cast<$BidiRun*(*)($BidiBase*,int32_t)>(&BidiLine::getVisualRun))},
	{"prepareReorder", "([B[B[B)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($bytes*,$bytes*,$bytes*)>(&BidiLine::prepareReorder))},
	{"reorderLine", "(Ljdk/internal/icu/text/BidiBase;BB)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BidiBase*,int8_t,int8_t)>(&BidiLine::reorderLine))},
	{"reorderVisual", "([B)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($bytes*)>(&BidiLine::reorderVisual))},
	{"setLine", "(Ljdk/internal/icu/text/BidiBase;Ljava/text/Bidi;Ljdk/internal/icu/text/BidiBase;II)Ljava/text/Bidi;", nullptr, $STATIC, $method(static_cast<$Bidi*(*)($BidiBase*,$Bidi*,$BidiBase*,int32_t,int32_t)>(&BidiLine::setLine))},
	{"setTrailingWSStart", "(Ljdk/internal/icu/text/BidiBase;)V", nullptr, $STATIC, $method(static_cast<void(*)($BidiBase*)>(&BidiLine::setTrailingWSStart))},
	{}
};

$ClassInfo _BidiLine_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.BidiLine",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BidiLine_MethodInfo_
};

$Object* allocate$BidiLine($Class* clazz) {
	return $of($alloc(BidiLine));
}

void BidiLine::init$() {
}

void BidiLine::setTrailingWSStart($BidiBase* bidiBase) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, dirProps, $nc(bidiBase)->dirProps);
	$var($bytes, levels, bidiBase->levels);
	int32_t start = bidiBase->length;
	int8_t paraLevel = bidiBase->paraLevel;
	if ($nc(dirProps)->get(start - 1) == $BidiBase::B) {
		bidiBase->trailingWSStart = start;
		return;
	}
	$init($BidiBase);
	while (start > 0 && ((int32_t)($BidiBase::DirPropFlag($nc(dirProps)->get(start - 1)) & (uint32_t)$BidiBase::MASK_WS)) != 0) {
		--start;
	}
	while (start > 0 && $nc(levels)->get(start - 1) == paraLevel) {
		--start;
	}
	bidiBase->trailingWSStart = start;
}

$Bidi* BidiLine::setLine($BidiBase* paraBidi, $Bidi* newBidi, $BidiBase* lineBidi, int32_t start, int32_t limit) {
	int32_t length = 0;
	length = ($nc(lineBidi)->length = (lineBidi->originalLength = (lineBidi->resultLength = limit - start)));
	$set(lineBidi, text, $new($chars, length));
	$System::arraycopy($nc(paraBidi)->text, start, lineBidi->text, 0, length);
	lineBidi->paraLevel = $nc(paraBidi)->GetParaLevelAt(start);
	lineBidi->paraCount = paraBidi->paraCount;
	$set(lineBidi, runs, $new($BidiRunArray, 0));
	lineBidi->reorderingMode = paraBidi->reorderingMode;
	lineBidi->reorderingOptions = paraBidi->reorderingOptions;
	if (paraBidi->controlCount > 0) {
		int32_t j = 0;
		for (j = start; j < limit; ++j) {
			if ($BidiBase::IsBidiControlChar($nc(paraBidi->text)->get(j))) {
				++lineBidi->controlCount;
			}
		}
		lineBidi->resultLength -= lineBidi->controlCount;
	}
	lineBidi->getDirPropsMemory(length);
	$set(lineBidi, dirProps, lineBidi->dirPropsMemory);
	$System::arraycopy(paraBidi->dirProps, start, lineBidi->dirProps, 0, length);
	lineBidi->getLevelsMemory(length);
	$set(lineBidi, levels, lineBidi->levelsMemory);
	$System::arraycopy(paraBidi->levels, start, lineBidi->levels, 0, length);
	lineBidi->runCount = -1;
	if (paraBidi->direction != $BidiBase::MIXED) {
		lineBidi->direction = paraBidi->direction;
		if (paraBidi->trailingWSStart <= start) {
			lineBidi->trailingWSStart = 0;
		} else if (paraBidi->trailingWSStart < limit) {
			lineBidi->trailingWSStart = paraBidi->trailingWSStart - start;
		} else {
			lineBidi->trailingWSStart = length;
		}
	} else {
		$var($bytes, levels, lineBidi->levels);
		int32_t i = 0;
		int32_t trailingWSStart = 0;
		int8_t level = 0;
		setTrailingWSStart(lineBidi);
		trailingWSStart = lineBidi->trailingWSStart;
		if (trailingWSStart == 0) {
			lineBidi->direction = (int8_t)((int32_t)(lineBidi->paraLevel & (uint32_t)1));
		} else {
			level = (int8_t)((int32_t)($nc(levels)->get(0) & (uint32_t)1));
			if (trailingWSStart < length && ((int32_t)(lineBidi->paraLevel & (uint32_t)1)) != level) {
				lineBidi->direction = $BidiBase::MIXED;
			} else {
				for (i = 1;; ++i) {
					if (i == trailingWSStart) {
						lineBidi->direction = level;
						break;
					} else if (((int32_t)(levels->get(i) & (uint32_t)1)) != level) {
						lineBidi->direction = $BidiBase::MIXED;
						break;
					}
				}
			}
		}
		switch (lineBidi->direction) {
		case $Bidi::DIRECTION_LEFT_TO_RIGHT:
			{
				lineBidi->paraLevel = (int8_t)((int32_t)((lineBidi->paraLevel + 1) & (uint32_t)~1));
				lineBidi->trailingWSStart = 0;
				break;
			}
		case $Bidi::DIRECTION_RIGHT_TO_LEFT:
			{
				lineBidi->paraLevel |= 1;
				lineBidi->trailingWSStart = 0;
				break;
			}
		default:
			{
				break;
			}
		}
	}
	$set(lineBidi, paraBidi, paraBidi);
	return newBidi;
}

int8_t BidiLine::getLevelAt($BidiBase* bidiBase, int32_t charIndex) {
	if ($nc(bidiBase)->direction != $BidiBase::MIXED || charIndex >= $nc(bidiBase)->trailingWSStart) {
		return bidiBase->GetParaLevelAt(charIndex);
	} else {
		return $nc(bidiBase->levels)->get(charIndex);
	}
}

$bytes* BidiLine::getLevels($BidiBase* bidiBase) {
	int32_t start = $nc(bidiBase)->trailingWSStart;
	int32_t length = bidiBase->length;
	if (start != length) {
		$Arrays::fill(bidiBase->levels, start, length, bidiBase->paraLevel);
		bidiBase->trailingWSStart = length;
	}
	if (length < $nc(bidiBase->levels)->length) {
		$var($bytes, levels, $new($bytes, length));
		$System::arraycopy(bidiBase->levels, 0, levels, 0, length);
		return levels;
	}
	return bidiBase->levels;
}

$BidiRun* BidiLine::getVisualRun($BidiBase* bidiBase, int32_t runIndex) {
	int32_t start = $nc($nc($nc(bidiBase)->runs)->get(runIndex))->start;
	int32_t limit = 0;
	int8_t level = $nc($nc(bidiBase->runs)->get(runIndex))->level;
	if (runIndex > 0) {
		limit = start + $nc($nc(bidiBase->runs)->get(runIndex))->limit - $nc($nc(bidiBase->runs)->get(runIndex - 1))->limit;
	} else {
		limit = start + $nc($nc(bidiBase->runs)->get(0))->limit;
	}
	return $new($BidiRun, start, limit, level);
}

void BidiLine::getSingleRun($BidiBase* bidiBase, int8_t level) {
	$set($nc(bidiBase), runs, bidiBase->simpleRuns);
	bidiBase->runCount = 1;
	$nc(bidiBase->runs)->set(0, $$new($BidiRun, 0, bidiBase->length, level));
}

void BidiLine::reorderLine($BidiBase* bidiBase, int8_t minLevel, int8_t maxLevel) {
	$useLocalCurrentObjectStackCache();
	if (maxLevel <= (minLevel | 1)) {
		return;
	}
	$var($BidiRunArray, runs, nullptr);
	$var($BidiRun, tempRun, nullptr);
	$var($bytes, levels, nullptr);
	int32_t firstRun = 0;
	int32_t endRun = 0;
	int32_t limitRun = 0;
	int32_t runCount = 0;
	++minLevel;
	$assign(runs, $nc(bidiBase)->runs);
	$assign(levels, bidiBase->levels);
	runCount = bidiBase->runCount;
	if (bidiBase->trailingWSStart < bidiBase->length) {
		--runCount;
	}
	while (--maxLevel >= minLevel) {
		firstRun = 0;
		for (;;) {
			while (firstRun < runCount && $nc(levels)->get($nc($nc(runs)->get(firstRun))->start) < maxLevel) {
				++firstRun;
			}
			if (firstRun >= runCount) {
				break;
			}
			{
				limitRun = firstRun;
				for (;;) {
					bool var$0 = ++limitRun < runCount;
					if (!(var$0 && $nc(levels)->get($nc($nc(runs)->get(limitRun))->start) >= maxLevel)) {
						break;
					}
					{
					}
				}
			}
			endRun = limitRun - 1;
			while (firstRun < endRun) {
				$assign(tempRun, $nc(runs)->get(firstRun));
				runs->set(firstRun, runs->get(endRun));
				runs->set(endRun, tempRun);
				++firstRun;
				--endRun;
			}
			if (limitRun == runCount) {
				break;
			} else {
				firstRun = limitRun + 1;
			}
		}
	}
	if (((int32_t)(minLevel & (uint32_t)1)) == 0) {
		firstRun = 0;
		if (bidiBase->trailingWSStart == bidiBase->length) {
			--runCount;
		}
		while (firstRun < runCount) {
			$assign(tempRun, $nc(runs)->get(firstRun));
			runs->set(firstRun, runs->get(runCount));
			runs->set(runCount, tempRun);
			++firstRun;
			--runCount;
		}
	}
}

int32_t BidiLine::getRunFromLogicalIndex($BidiBase* bidiBase, int32_t logicalIndex) {
	$var($BidiRunArray, runs, $nc(bidiBase)->runs);
	int32_t runCount = bidiBase->runCount;
	int32_t visualStart = 0;
	int32_t i = 0;
	int32_t length = 0;
	int32_t logicalStart = 0;
	for (i = 0; i < runCount; ++i) {
		length = $nc($nc(runs)->get(i))->limit - visualStart;
		logicalStart = $nc(runs->get(i))->start;
		if ((logicalIndex >= logicalStart) && (logicalIndex < (logicalStart + length))) {
			return i;
		}
		visualStart += length;
	}
	$throwNew($IllegalStateException, "Internal ICU error in getRunFromLogicalIndex"_s);
}

void BidiLine::getRuns($BidiBase* bidiBase) {
	$useLocalCurrentObjectStackCache();
	if ($nc(bidiBase)->runCount >= 0) {
		return;
	}
	if ($nc(bidiBase)->direction != $BidiBase::MIXED) {
		getSingleRun(bidiBase, bidiBase->paraLevel);
	} else {
		int32_t length = bidiBase->length;
		int32_t limit = 0;
		$var($bytes, levels, bidiBase->levels);
		int32_t i = 0;
		int32_t runCount = 0;
		int8_t level = (int8_t)-1;
		limit = bidiBase->trailingWSStart;
		runCount = 0;
		for (i = 0; i < limit; ++i) {
			if ($nc(levels)->get(i) != level) {
				++runCount;
				level = levels->get(i);
			}
		}
		if (runCount == 1 && limit == length) {
			getSingleRun(bidiBase, $nc(levels)->get(0));
		} else {
			$var($BidiRunArray, runs, nullptr);
			int32_t runIndex = 0;
			int32_t start = 0;
			int8_t minLevel = (int8_t)($BidiBase::MAX_EXPLICIT_LEVEL + 1);
			int8_t maxLevel = (int8_t)0;
			if (limit < length) {
				++runCount;
			}
			bidiBase->getRunsMemory(runCount);
			$assign(runs, bidiBase->runsMemory);
			runIndex = 0;
			i = 0;
			do {
				start = i;
				level = $nc(levels)->get(i);
				if (level < minLevel) {
					minLevel = level;
				}
				if (level > maxLevel) {
					maxLevel = level;
				}
				while (true) {
					bool var$0 = ++i < limit;
					if (!(var$0 && levels->get(i) == level)) {
						break;
					}
					{
					}
				}
				$nc(runs)->set(runIndex, $$new($BidiRun, start, i - start, level));
				++runIndex;
			} while (i < limit);
			if (limit < length) {
				$nc(runs)->set(runIndex, $$new($BidiRun, limit, length - limit, bidiBase->paraLevel));
				if (bidiBase->paraLevel < minLevel) {
					minLevel = bidiBase->paraLevel;
				}
			}
			$set(bidiBase, runs, runs);
			bidiBase->runCount = runCount;
			reorderLine(bidiBase, minLevel, maxLevel);
			limit = 0;
			for (i = 0; i < runCount; ++i) {
				$nc($nc(runs)->get(i))->level = $nc(levels)->get($nc(runs->get(i))->start);
				limit = ($nc(runs->get(i))->limit += limit);
			}
			if (runIndex < runCount) {
				int32_t trailingRun = (((int32_t)(bidiBase->paraLevel & (uint32_t)1)) != 0) ? 0 : runIndex;
				$nc($nc(runs)->get(trailingRun))->level = bidiBase->paraLevel;
			}
		}
	}
	if ($nc($nc(bidiBase)->insertPoints)->size > 0) {
		$var($BidiBase$Point, point, nullptr);
		int32_t runIndex = 0;
		int32_t ip = 0;
		for (ip = 0; ip < $nc(bidiBase->insertPoints)->size; ++ip) {
			$assign(point, $nc($nc(bidiBase->insertPoints)->points)->get(ip));
			runIndex = getRunFromLogicalIndex(bidiBase, $nc(point)->pos);
			$nc($nc(bidiBase->runs)->get(runIndex))->insertRemove |= $nc(point)->flag;
		}
	}
	if ($nc(bidiBase)->controlCount > 0) {
		int32_t runIndex = 0;
		int32_t ic = 0;
		char16_t c = 0;
		for (ic = 0; ic < bidiBase->length; ++ic) {
			c = $nc(bidiBase->text)->get(ic);
			if ($BidiBase::IsBidiControlChar(c)) {
				runIndex = getRunFromLogicalIndex(bidiBase, ic);
				--$nc($nc(bidiBase->runs)->get(runIndex))->insertRemove;
			}
		}
	}
}

$ints* BidiLine::prepareReorder($bytes* levels, $bytes* pMinLevel, $bytes* pMaxLevel) {
	int32_t start = 0;
	int8_t level = 0;
	int8_t minLevel = 0;
	int8_t maxLevel = 0;
	if (levels == nullptr || $nc(levels)->length <= 0) {
		return nullptr;
	}
	minLevel = (int8_t)($BidiBase::MAX_EXPLICIT_LEVEL + 1);
	maxLevel = (int8_t)0;
	for (start = $nc(levels)->length; start > 0;) {
		level = levels->get(--start);
		if (level < 0 || level > ($BidiBase::MAX_EXPLICIT_LEVEL + 1)) {
			return nullptr;
		}
		if (level < minLevel) {
			minLevel = level;
		}
		if (level > maxLevel) {
			maxLevel = level;
		}
	}
	$nc(pMinLevel)->set(0, minLevel);
	$nc(pMaxLevel)->set(0, maxLevel);
	$var($ints, indexMap, $new($ints, levels->length));
	for (start = levels->length; start > 0;) {
		--start;
		indexMap->set(start, start);
	}
	return indexMap;
}

$ints* BidiLine::reorderVisual($bytes* levels) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, aMinLevel, $new($bytes, 1));
	$var($bytes, aMaxLevel, $new($bytes, 1));
	int32_t start = 0;
	int32_t end = 0;
	int32_t limit = 0;
	int32_t temp = 0;
	int8_t minLevel = 0;
	int8_t maxLevel = 0;
	$var($ints, indexMap, prepareReorder(levels, aMinLevel, aMaxLevel));
	if (indexMap == nullptr) {
		return nullptr;
	}
	minLevel = aMinLevel->get(0);
	maxLevel = aMaxLevel->get(0);
	if (minLevel == maxLevel && ((int32_t)(minLevel & (uint32_t)1)) == 0) {
		return indexMap;
	}
	minLevel |= 1;
	do {
		start = 0;
		for (;;) {
			while (start < $nc(levels)->length && levels->get(start) < maxLevel) {
				++start;
			}
			if (start >= $nc(levels)->length) {
				break;
			}
			{
				limit = start;
				for (;;) {
					bool var$0 = ++limit < $nc(levels)->length;
					if (!(var$0 && levels->get(limit) >= maxLevel)) {
						break;
					}
					{
					}
				}
			}
			end = limit - 1;
			while (start < end) {
				temp = $nc(indexMap)->get(start);
				indexMap->set(start, indexMap->get(end));
				indexMap->set(end, temp);
				++start;
				--end;
			}
			if (limit == $nc(levels)->length) {
				break;
			} else {
				start = limit + 1;
			}
		}
	} while (--maxLevel >= minLevel);
	return indexMap;
}

$ints* BidiLine::getVisualMap($BidiBase* bidiBase) {
	$useLocalCurrentObjectStackCache();
	$var($BidiRunArray, runs, $nc(bidiBase)->runs);
	int32_t logicalStart = 0;
	int32_t visualStart = 0;
	int32_t visualLimit = 0;
	int32_t allocLength = bidiBase->length > bidiBase->resultLength ? bidiBase->length : bidiBase->resultLength;
	$var($ints, indexMap, $new($ints, allocLength));
	visualStart = 0;
	int32_t idx = 0;
	for (int32_t j = 0; j < bidiBase->runCount; ++j) {
		logicalStart = $nc($nc(runs)->get(j))->start;
		visualLimit = $nc(runs->get(j))->limit;
		if ($nc(runs->get(j))->isEvenRun()) {
			do {
				indexMap->set(idx++, logicalStart++);
			} while (++visualStart < visualLimit);
		} else {
			logicalStart += visualLimit - visualStart;
			do {
				indexMap->set(idx++, --logicalStart);
			} while (++visualStart < visualLimit);
		}
	}
	if ($nc(bidiBase->insertPoints)->size > 0) {
		int32_t markFound = 0;
		int32_t runCount = bidiBase->runCount;
		int32_t insertRemove = 0;
		int32_t i = 0;
		int32_t j = 0;
		int32_t k = 0;
		$assign(runs, bidiBase->runs);
		for (i = 0; i < runCount; ++i) {
			insertRemove = $nc($nc(runs)->get(i))->insertRemove;
			if (((int32_t)(insertRemove & (uint32_t)($BidiBase::LRM_BEFORE | $BidiBase::RLM_BEFORE))) > 0) {
				++markFound;
			}
			if (((int32_t)(insertRemove & (uint32_t)($BidiBase::LRM_AFTER | $BidiBase::RLM_AFTER))) > 0) {
				++markFound;
			}
		}
		k = bidiBase->resultLength;
		for (i = runCount - 1; i >= 0 && markFound > 0; --i) {
			insertRemove = $nc($nc(runs)->get(i))->insertRemove;
			if (((int32_t)(insertRemove & (uint32_t)($BidiBase::LRM_AFTER | $BidiBase::RLM_AFTER))) > 0) {
				indexMap->set(--k, $BidiBase::MAP_NOWHERE);
				--markFound;
			}
			visualStart = i > 0 ? $nc(runs->get(i - 1))->limit : 0;
			for (j = $nc(runs->get(i))->limit - 1; j >= visualStart && markFound > 0; --j) {
				indexMap->set(--k, indexMap->get(j));
			}
			if (((int32_t)(insertRemove & (uint32_t)($BidiBase::LRM_BEFORE | $BidiBase::RLM_BEFORE))) > 0) {
				indexMap->set(--k, $BidiBase::MAP_NOWHERE);
				--markFound;
			}
		}
	} else if (bidiBase->controlCount > 0) {
		int32_t runCount = bidiBase->runCount;
		int32_t logicalEnd = 0;
		int32_t insertRemove = 0;
		int32_t length = 0;
		int32_t i = 0;
		int32_t j = 0;
		int32_t k = 0;
		int32_t m = 0;
		char16_t uchar = 0;
		bool evenRun = false;
		$assign(runs, bidiBase->runs);
		visualStart = 0;
		k = 0;
		for (i = 0; i < runCount; ++i, visualStart += length) {
			length = $nc($nc(runs)->get(i))->limit - visualStart;
			insertRemove = $nc(runs->get(i))->insertRemove;
			if ((insertRemove == 0) && (k == visualStart)) {
				k += length;
				continue;
			}
			if (insertRemove == 0) {
				visualLimit = $nc(runs->get(i))->limit;
				for (j = visualStart; j < visualLimit; ++j) {
					indexMap->set(k++, indexMap->get(j));
				}
				continue;
			}
			logicalStart = $nc(runs->get(i))->start;
			evenRun = $nc(runs->get(i))->isEvenRun();
			logicalEnd = logicalStart + length - 1;
			for (j = 0; j < length; ++j) {
				m = evenRun ? logicalStart + j : logicalEnd - j;
				uchar = $nc(bidiBase->text)->get(m);
				if (!$BidiBase::IsBidiControlChar(uchar)) {
					indexMap->set(k++, m);
				}
			}
		}
	}
	if (allocLength == bidiBase->resultLength) {
		return indexMap;
	}
	$var($ints, newMap, $new($ints, bidiBase->resultLength));
	$System::arraycopy(indexMap, 0, newMap, 0, bidiBase->resultLength);
	return newMap;
}

BidiLine::BidiLine() {
}

$Class* BidiLine::load$($String* name, bool initialize) {
	$loadClass(BidiLine, name, initialize, &_BidiLine_ClassInfo_, allocate$BidiLine);
	return class$;
}

$Class* BidiLine::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk