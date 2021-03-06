﻿// SPDX-License-Identifier: MIT
// SPDX-FileCopyrightText: 2016 Hotride
// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2020 Danny Angelo Carminati Grein

#ifndef WISP_PCKT_H
#define WISP_PCKT_H

#include <vector>
#include <stdint.h>

namespace Wisp
{
class CPacketMessage
{
    bool BigEndian = false;

protected:
    std::vector<uint8_t> m_Data;

public:
    CPacketMessage(bool bigEndian = true);
    CPacketMessage(uint8_t *data, int dataSizeconst, bool bigEndian = true);
    CPacketMessage(const std::vector<uint8_t> &dataconst, bool bigEndian = true);
    virtual ~CPacketMessage();

    void Append(uint8_t *data, int dataSize);
    void Append(const std::vector<uint8_t> &data);

    void Clear() { m_Data.clear(); }

    std::vector<uint8_t> Read(class CPacketReader *reader, int &dataOffset);
};

}; // namespace Wisp

#endif // WISP_PCKT_H
