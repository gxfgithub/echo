#pragma once

#include "engine/core/resource/Res.h"
#include "engine/core/render/base/Texture.h"

namespace Echo
{
    class TextureAtla : public Res
    {
        ECHO_RES(TextureAtla, Res, ".atla", Res::create<TextureAtla>, TextureAtla::load);

	public:
		// Atla
		struct Atla
		{
			String	 m_name;
			Vector4  m_viewPort;
		};

    public:
		TextureAtla();
		TextureAtla(const ResourcePath& path);
        virtual ~TextureAtla();

		// texture res path
		void setTextureRes(const ResourcePath& path);
		const ResourcePath& getTextureRes() { return m_textureRes; }

		// texture
		const TexturePtr& getTexture() { return m_texture; }

		// add
		void addAtla(const String& name, const Vector4& viewPort);
		void removeAtla(const String& name);

		// get viewport
		bool getViewport(const String& name, Vector4& viewPort);

		// get all atlas
		const vector<Atla>::type& getAllAtlas() { return m_atlas; }

		// clear
		void clear();

        // load | save
        static Res* load(const ResourcePath& path);
        virtual void save() override;

    protected:
		vector<Atla>::type	m_atlas;
		ResourcePath		m_textureRes = ResourcePath("", ".png");
		TexturePtr			m_texture;
    };
    typedef ResRef<TextureAtla> TextureAtlaPtr;
}