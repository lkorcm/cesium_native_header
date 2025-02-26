// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumQuantizedMeshTerrain/Library.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>

namespace CesiumQuantizedMeshTerrain {
/**
 * @brief A rectangle of tile availability.
 */
struct CESIUMQUANTIZEDMESHTERRAIN_API AvailabilityRectangle final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "AvailabilityRectangle";

  /**
   * @brief The index of the start tile in the X direction.
   */
  int64_t startX = int64_t();

  /**
   * @brief The index of the start tile in the Y direction.
   */
  int64_t startY = int64_t();

  /**
   * @brief The index of the end tile in the X direction.
   */
  int64_t endX = int64_t();

  /**
   * @brief The index of the end tile in the Y direction.
   */
  int64_t endY = int64_t();

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(AvailabilityRectangle));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));

    return accum;
  }
};
} // namespace CesiumQuantizedMeshTerrain
