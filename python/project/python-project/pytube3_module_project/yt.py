from pytube import YouTube

yt = YouTube('https://youtu.be/hju7ZDk1mrQ')

print(yt.title)

# yt.thumbnail_url

# yt.streams.all()


# stream = yt.streams.first()
# print(stream)

#stream.download()