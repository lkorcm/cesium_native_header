// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <Cesium3DTiles/Library.h>
#include <Cesium3DTiles/MetadataEntity.h>

namespace Cesium3DTiles {
/**
 * @brief An object containing metadata about a group.
 */
struct CESIUM3DTILES_API GroupMetadata final : public MetadataEntity {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "GroupMetadata";

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(GroupMetadata));
    accum += MetadataEntity::getSizeBytes() - int64_t(sizeof(MetadataEntity));

    return accum;
  }
};
} // namespace Cesium3DTiles
