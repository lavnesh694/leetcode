from fpdf import FPDF

# Existing timetable data
timetable = [
    ("Serial No", "Work"),
    ("5:00", "Cricket"),
    ("6:00", "Coding"),
    ("7:00", "Web Development"),
    ("8:00", "B.Tech Subject 1"),
    ("9:00", "B.Tech Subject 2"),
    ("10:00", "B.Tech Subject 3"),
]

# Create PDF object
pdf = FPDF()

# Set font and font size
pdf.set_font("Arial", size=12)

# Set colors
red = (255, 0, 0)
blue = (0, 0, 255)

# Set initial position
x = 10
y = 10

# Iterate over timetable data and add to PDF
for i, (time, work) in enumerate(timetable):
    # Set text color based on type of data
    if i == 0:
        pdf.set_text_color(*red)
    else:
        pdf.set_text_color(*blue)

    # Split the time into hours and minutes
    hour,minute = time.split(":",1)
    
    # Display the time and work
    pdf.cell(30, 10, hour + ":" + minute + " " + work, align="L", border=1)

    # Update the y position for the next line
    y += 10

# Save the PDF
pdf.output("timetable.pdf")